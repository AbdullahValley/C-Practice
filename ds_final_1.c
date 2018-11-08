#include<stdio.h>

void main()
{
    int a[30], F, R, n, i, item, max=30;

    printf("Enter the Limit : ");
    scanf("%d", &n);

    if(n==0)
    {
        F = '\0';
        R = '\0';

    printf("\nInitially Front = %d and My Rear = %d\n", F, R);

    }

    else
    {   printf("Enter %d List : ", n);
        for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
        }

        F = 1;
        R = n;

        printf("\nInitially Front = %d and My Rear = %d\n", F, R);
    }

     printf("Please Enter Item : ");
     scanf("%d", &item);

    if(F==1 && R >= max)
    {
        printf("\nOver FLOW\n");
        return 0;
    }

    else
    {
        if(F=='\0' && R=='\0')
        {
            F = 1;
            R = 1;
        }

        else if(R == max && a[1] == '\0')
        {
            R = 1;
        }

        else
        {
            R++;
        }

        a[R] = item;

        printf("\nFinally Front = %d and My Rear = %d", F, R);

        printf("\nAfter Insert that our Series : ");
        for(i=F; i<=R; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\n");
    }
}
