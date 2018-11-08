#include<stdio.h>
void main()
{
    int i,j,s,mid=39,n=5;

    for(i=1;i<=mid;i++)
    {
        printf(" ");
    }
    printf("*\n");

    for(i=1;i<=n*2;i++)
    {
        for(s=1;s<=mid-i;s++)
        {
            printf(" ");
        }
        printf("*");
               if (i==n+2)
               {
                for(i=1;i<=n+1;i++)
                {
                printf(" *");
                }
            }

        for(j=1;j<=2*i-1;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
}
