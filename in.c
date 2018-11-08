#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SEED 347436587
void main()
{
    int i,m;
    double r1,r2,r3,ran1,x,y,range1,range2,max1=5,max2=1,min1=2,min2=0,n=0,G,error;
    double I=152.25;
    double h=max1*max1*max1;
    range1=max1-min1;
    range2=max2-min2;
    double A=h*range1;
    printf("enter the number:");
    scanf("%d",&m);
    srand(SEED);
    for(i=0;i<m;i++)
    {
        r1=(double)rand()/RAND_MAX;
        x=(r1*range1)+min1;
        r2=(double)rand()/RAND_MAX;
        ran1=(r2*range2)+min2;
        y=ran1*h;
        r3=x*x*x;
        if(y<=r3)
            n++;
    }
    //printf("%g",n);
    G=(n/m)*A;
    error=(abs(I-G)/I)*100;
    printf("error is %g\n",error);
    double Accuracy=(100-error);
    printf("accuracy is %g:",Accuracy);


}
