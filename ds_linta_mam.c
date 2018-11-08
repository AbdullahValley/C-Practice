#include<stdio.h>

void main()
{
    int a[5];
    int n, i, multi=1;
    printf("Enter Limit : ");
    scanf("%d", &n);

printf("Array %d Value : ",n);

    for(i=1; i<=n; i++)
    {

        scanf("%d", &a[i]);
    }

    for(i=1; i<=n; i++)
    {
        multi=multi*a[i];
    }

    printf("\n\nThe Value of Multiplication is : %d\n\n", multi);
}
