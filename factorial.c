#include<stdio.h>
int main()
{

    int i, f, n;
    scanf("%d", &n);
    f=1;
    for(i=1; i<=n; i++)
{
    f=f*i;
}
printf("The Factorial %d Value is %d", n,f);
}
