#include<stdio.h>
void main()
{
    int i, j, k, l, arm_size, mid=39;

    printf("please enter Arm Size : ");
    scanf("%d", &arm_size);

    for(i=1; i<=arm_size*2+2; i++)
    {
        for(j=1; j<=mid-i; j++)
        {
            printf(" ");
        }
        if(i!=1)
            printf("*");
        if(i==arm_size+2)
        {
            for(l=1; l<=arm_size+1; l++)
            {
                printf(" *");
            }
            printf("\n");
            continue;
        }

        for(k=1; k<=2*i-3; k++)
        {
        printf(" ");
        }
        printf("*\n");
    }
}
