#include<stdio.h>
void main()
{
    float i;
    printf("Enter the GPA : ");
    scanf("%f", &i);

    if(i==4.0)
    {
        printf("A+");
    }
else if(i>=3.75 && i<4.00)
    {
        printf("A");
    }
else if(i>=3.50 && i<=3.74)
    {
        printf("B");
    }
else if(i>=3.25 && i<=3.49)
    {
        printf("C");
    }
else if(i>=3.00 && i<=3.24)
    {
        printf("D");
    }
else if(i<3.00)
    {
        printf("F");
    }

    else
    {
        printf("Error in Input");
    }
}
