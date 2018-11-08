#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SEED 347436587
void main()
{
    int i,n;
    double ran1,ran2,r,x,y,range1,range2,m=0,G,error,x3,x_upper_limit,y_upper_limit,x_lower_limit,y_lower_limit;

            printf("ENTER the upper and lower limit of X axis: \n");
            scanf("%lf%lf",&x_upper_limit,&x_lower_limit);

            printf("ENTER the upper and lower limit of Y axis: \n");
            scanf("%lf%lf",&y_upper_limit,&y_lower_limit);

    double I = (pow(x_upper_limit,4) - pow(x_lower_limit,4))/4;

            printf("\nThis is integration result : %.2lf\n\n",I);

    double h = x_upper_limit*x_upper_limit*x_upper_limit;

            range1 = x_upper_limit-x_lower_limit;
            range2 = y_upper_limit-y_lower_limit;

    double A = h*range1;

            printf("ENTER How many Simulation you want ? : \n");
            scanf("%d",&n);

    srand(SEED);

    for(i=0; i<n; i++)
    {
        ran1 = (double)rand()/RAND_MAX;
        x = (ran1*range1)+x_lower_limit;

        ran2 = (double)rand()/RAND_MAX;
        r = (ran2*range2)+y_lower_limit;

        y = r*h;

        x3 = x*x*x;

        if(y<=x3)
            m++;
    }

    G = (m/n)*A; // Generated Value Formula

    printf("\nGenerated value is %g\n\n",G);
    error = (abs(I-G)/I)*100;

    printf("Error is : %g\n\n",error);

    double Accuracy = (100-error);
    printf("Accuracy is : %g\n",Accuracy);


}

