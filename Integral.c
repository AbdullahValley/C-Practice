#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SEED 347436587
void main()
{
    int i,n;
    double ran1,ran2,ran3,r,x,y,range1,range2,m=0,G,error,r3,max1,max2,min1,min2;
    printf("enter the highest and lowest limite of x axis: \n");
    scanf("%lf%lf",&max1,&min1);
     printf("enter the highest and lowest limite of y axis: \n");
    scanf("%lf%lf",&max2,&min2);
    double I=152.25;
    double h=max1*max1*max1;
    range1=max1-min1;
    range2=max2-min2;
    double A=h*range1;
    printf("enter the simulation number: \n");
    scanf("%d",&n);
    srand(SEED);
    for(i=0;i<n;i++)
    {
        ran1=(double)rand()/RAND_MAX;
        x=(ran1*range1)+min1;
        ran2=(double)rand()/RAND_MAX;
        r=(ran2*range2)+min2;
        y=r*h;
        r3=x*x*x;
        if(y<=r3)
            m++;
    }

    G=(m/n)*A;
    printf("Generated value is %g\n\n",G);
    error=(abs(I-G)/I)*100;
    printf("error is %g\n\n",error);
    double Accuracy=(100-error);
    printf("accuracy is %g\n",Accuracy);


}

