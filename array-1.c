#include<stdio.h>
void main()
{
    int i;
    float cgpa[4], avg_cgpa, sum;

    for(i=0; i<4; i++)
    {
        scanf("%f", &cgpa[i]);
    }

    sum=0;
    for(i=0; i<4; i++)
    {
        sum=sum+cgpa[i];
    }

    avg_cgpa=sum/4;

    printf("The Average CGPA is : %.2f\n", avg_cgpa);

}
