//This first sections contains the functions required to compute the Chi-Squared probability.
// These are not needed if a library containing the necessary function is availabile
//(e.g. see Numerical Integration, Gamma function).

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

typedef double (* Ifctn)( double t);
/* Numerical integration method */
double Simpson3_8( Ifctn f, double a, double b, int N)
{
    int j;
    double l1;
    double h = (b-a)/N;
    double h1 = h/3.0;
    double sum = f(a) + f(b);

    for (j=3*N-1; j>0; j--) {
        l1 = (j%3)? 3.0 : 2.0;
        sum += l1*f(a+h1*j) ;
    }
    return h*sum/8.0;
}

#define A 12
double Gamma_Spouge( double z )
{
    int k;
    static double cspace[A];
    static double *coefs = NULL;
    double accum;
    double a = A;

    if (!coefs) {
        double k1_factrl = 1.0;
        coefs = cspace;
        coefs[0] = sqrt(2.0*M_PI);
        for(k=1; k<A; k++) {
            coefs[k] = exp(a-k) * pow(a-k,k-0.5) / k1_factrl;
            k1_factrl *= -k;
        }
    }

    accum = coefs[0];
    for (k=1; k<A; k++) {
        accum += coefs[k]/(z+k);
    }
    accum *= exp(-(z+a)) * pow(z+a, z+0.5);
    return accum/z;
}

double aa1;
double f0( double t)
{
    return  pow(t, aa1)*exp(-t);
}

double GammaIncomplete_Q( double a, double x)
{
    double y, h = 1.5e-2;  /* approximate integration step size */

    /* this cuts off the tail of the integration to speed things up */
    y = aa1 = a-1;
    while((f0(y) * (x-y) > 2.0e-8) && (y < x))   y += .4;
    if (y>x) y=x;

    return 1.0 - Simpson3_8( &f0, 0, y, (int)(y/h))/Gamma_Spouge(a);
}
//This section contains the functions specific to the task.

double chi2UniformDistance( double *ds, int dslen)
{
    double expected = 0.0;
    double sum = 0.0;
    int k;

    for (k=0; k<dslen; k++)
        expected += ds[k];
    expected /= k;

    for (k=0; k<dslen; k++) {
        double x = ds[k] - expected;
        sum += x*x;
    }
    return sum/expected;
}

double chi2Probability( int dof, double distance)
{
    return GammaIncomplete_Q( 0.5*dof, 0.5*distance);
}

int chiIsUniform( double *dset, int dslen, double significance)
{
    int dof = dslen -1;
    double dist = chi2UniformDistance( dset, dslen);
    return chi2Probability( dof, dist ) > significance;
}

//test

int main(int argc, char **argv)
{
    double dset1[] = { 199809., 200665., 199607., 200270., 199649. };
    double dset2[] = { 522573., 244456., 139979.,  71531.,  21461. };
    double *dsets[] = { dset1, dset2 };
    int     dslens[] = { 5, 5 };
    int k, l;
    double  dist, prob;
    int dof;

    for (k=0; k<2; k++) {
        printf("Dataset: [ ");
        for(l=0;l<dslens[k]; l++)
            printf("%.0f, ", dsets[k][l]);

        printf("]\n");
        dist = chi2UniformDistance(dsets[k], dslens[k]);
        dof = dslens[k]-1;
        printf("dof: %d  distance: %.4f", dof, dist);
        prob = chi2Probability( dof, dist );
        printf(" probability: %.6f", prob);
        printf(" uniform? %s\n", chiIsUniform(dsets[k], dslens[k], 0.05)? "Yes":"No");
    }
    return 0;
}
