#include<stdio.h>
int main()
{


    int *p,x;
    x=100;
    p=&x;
    *p=97;
    printf("1st value of x is : %d\n", x);
    x=x%10+5;
    x-=5;

    printf("2nd value of x is : %d\n", x);

    return 0;
}
