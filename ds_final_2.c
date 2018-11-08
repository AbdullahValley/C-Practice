#include<stdio.h>

void main()
{
    int a[20], TOP, i, n, MAX, item;

    printf("Enter a limit: ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("\n\nUnder Flow !!!!\n\n");
        return 0;
    }

    else
    {
    printf("Enter %d values: ", n);
    for(i=1; i<=n; i++)
    {
         scanf("%d",&a[i]);
    }

    MAX=20;

    TOP = n;

            if(n==0)
            {
                printf("\n\nUnder Flow !!!!\n\n");
                return 0;
            }

            else
            {
                TOP = TOP-1;
            }
    }

    printf("AFTER Delete The Values are : ");

    for(i=1; i<=TOP; i++)
    {
         printf("%d ", a[i]);
    }

    printf("\n");

}
