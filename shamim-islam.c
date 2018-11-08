#include <stdio.h>
#include<math.h>

void main()
{
    int i,j,k,l,mid=41,n=10,m,a;

    for(l=1;l<=41;l++)
        {
            printf(" ");
        }
        {
            printf("*");
        }
            printf("\n");

        for(i=1;i<=20;i++)
        {

            for(j=1;j<=mid-i;j++)
            {
                printf(" ");
            }
            {
                printf("*");
            }


        for(k=1;k<=2*i-1;k++)
            {
                printf(" ");
            }
            {
                printf("*");
            }
            {
                printf("\n");
            }
        }
        for(m=1;m<=19;m++)
            {
            printf(" ");
            }
        for(a=1;a<=22;a++)
            {
                printf(" *");
            }
            {
                printf("\n");
            }

        for(i=1;i<=10;i++)
            {
                for(j=1;j<=18-i+2;j++)
            {
                printf(" ");
            }
            {
                printf("*  ");
            }

                for(k=1;k<=i*2+mid-2;k++)
                {
                    printf(" ");
                }
                {
                    printf("*\n");
                }
            }
}
