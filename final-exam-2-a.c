#include<stdio.h>
void main()
{
    int n, b=0, a, c;
    n=4327;
    c=n;
    while(c!=0)
    {
        a=c%10;
        b=b*10+a;
        c/=10;
    }

    printf("The output is : %d", b);
}
