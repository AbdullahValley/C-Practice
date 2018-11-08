#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SEED 67467

int main ()
{
    int n,i;
    double r1,r2,random,x,y,max,max1,min,min1,range,range1,R3;
    double I=152.23,m=0,g,E,A;
    Printf("Enter the highest value of X :");
    scanf("%f",&max);
    Printf("Enter the lowest value of X :");
    scanf("%f",&min);
    Printf("Enter the highest value of Y :");
    scanf("%f",&max1);
    Printf("Enter the highest value of Y :");
    scanf("%f",&min1);

    range= max-min;
    range1= max1-min1;
    double hight= max*max*max;
    A= hight*(max-min);

Printf("Enter the number of action :");
    scanf("%d",&n);

    Printf("%f",hight);

    srand (SEED);

    for(i=0;i<n,)

    {
       r1=(double) rand()/RAND_MAX;
       x=(range*r1)+min;
       r2=(double) rand()/RAND_MAX;
       hight=(range1*r2)+min1;
       y=height*random;
       R3=x*x*x;
       
       if(y<=R3)
           m++;

       printf("%f   %f   %f\n",x,y,R3);
    }

    printf("m=%g\n",m);
      printf("n=%g\n",n);

    
    g=(m/n)*A;
      printf("generated value=%f\n",g);
    E=(abs(I-g)/I)*100;
    printf("error=%f parcent",E);


}


