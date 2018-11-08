#include<stdio.h>
int main()
{
    double c1=50,c2=25,c3=0,t,p=0;
    double time,delta;
    printf("enter the time and delta :");

    scanf("%lf %lf",&time,&delta);
    for(t=0;t<=1;t=t+.1)
    {
        printf("%.1f  %.2f  %.2f  %.2f\n",t,c1+p,c2+p,c3-2*p);
        p=(0.1*c3-.025*c1*c2)*.1;

    }

}
