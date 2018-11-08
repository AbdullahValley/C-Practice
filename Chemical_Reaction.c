#include<stdio.h>
#include<math.h>
void main()
{
    double K1=0.025,K2=0.01,C1=50.00,C2=25.00,C3=0.00,t;
     double time,dif_time;

     printf("enter the time and dif_time :");
     scanf("%lf %lf",&time,&dif_time);

    for(t=0.00;t<=0.1; t+=0.01)
    {

        C1=C1+((K2*C3)-(K1*C1*C2))*t;
        C2=C2+((K2*C3)-(K1*C1*C2))*t;
        C3=C3+((2*K1*C1*C2)-(2*K2*C3))*t;

        printf("%.2lf  %.2lf  %.2lf %.2lf\n",t,C1,C2,C3);

    }

}
