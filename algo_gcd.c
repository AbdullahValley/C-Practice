#include<stdio.h>
int gcd(int a, int b)
{
    if(b%a != 0)
        return gcd(b%a, a);
    else
        return a;
}

void main()
{
    int a=15, b=25, result;
    result = gcd(a,b);
    printf("%d ", result);
    result = gcd(8,12);
    printf("%d ", result);

}
