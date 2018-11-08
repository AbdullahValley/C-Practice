#include<stdio.h>
void main()
{
int i, j, k, l, m, a, n=9, mid=20;

    for(l=1; l<=40; l++)
    {
    printf(" ");
    }
    printf("*\n");

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=mid-i; j++)
                {
                printf("  ");
                }
                printf("* ");

            for(k=1; k<=2*i-1; k++)
                {
                printf("  ");
                }
                printf("*\n");
        }
            for(m=1; m<=mid+1; m++)
                {
                printf(" ");
                }
            for(a=1; a<=mid; a++)
                {
                printf("* ");
                }
                printf("\n");



        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n-i+2; j++)
                {
                printf("  ");
                }
                printf("*");

            for(k=1; k<=i*2+mid-2; k++)
                {
                printf("  ");
                }
                printf("*\n");
        }


}
