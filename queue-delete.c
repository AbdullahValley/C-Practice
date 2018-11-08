#include<stdio.h>
void main()
{
    int a[5], F,R, n, i, max=5;

    printf("Enter Limit : ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("Under FLOW !\n");
        return 0;
    }

    else
    {   printf("%d List : ", n);
        for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
        }

        F = 1;
        R = n;
        printf("\nInitially\nFront = %d ", F);
        printf("Rear = %d \n\n", R);
    }

        if(F == R)
        {
            F = 0;
            R = 0;
        }

        else if(F == max && a[i] != '\0')
        {
            F = 1;
        }

        else
        {
            F++;
        }

        printf("\nFront = %d ", F);
        printf("Rear = %d \n\n", R);

        printf("After DELETE our Series : ");
        for(i=F; i<=R; i++)
        {
            printf("%d ", a[i]);
        }

    printf("\n\n");

}

