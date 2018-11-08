#include<stdio.h>
void main()
{
    int i, j, n=6, k=0;
    for(i=1; i<=6; ++i)
    {
        for(j=1; j<=n-i; ++j)
        {
           printf("  ");
        }
        while(k!=2*i-1)
        {
           printf("* ");
           ++k;
        }
        k=0;
        printf("\n");
    }
}
