#include <stdio.h>
void main()
{
    float a,b,c,d,cgpa;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    cgpa=(a+b+c+d)/4;
    printf("%.2f\n",cgpa);

    if(cgpa==4.00)
    {
        printf("A+");
    }
    else if(cgpa>=3.75 && cgpa<4.00)
    {
        printf("A");
    }
    else if(cgpa>=3.50 && cgpa<=3.74)
    {
        printf("B");
    }
    else if(cgpa>=3.25 && cgpa<=3.49)
    {
        printf("C");
    }
    else if(cgpa>=3.50 && cgpa<=3.74)
    {
        printf("D");
    }
    else if(cgpa<3.00)
    {
        printf("F");
    }
    else if(cgpa<0 || cgpa>4.00)
    {
        printf("\nError in input\n");
    }
}
