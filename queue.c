#include<stdio.h>
void main()
{
    int a[5], F,R, n, i, item, max=5;

    printf("Enter Limit : ");
    scanf("%d", &n);

    if(n==0)
    {
        F = '\0';
        R = '\0';
        printf("\nInitially\nFront = %d ", F);
        printf("Rear = %d \n\n", R);
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

     printf("Enter Item : ");
     scanf("%d", &item);

    if(F==1 && R>=max)
    {
        printf("Over FLOW\n");
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

        printf("\nFront = %d ", F);
        printf("Rear = %d \n\n", R);

        printf("After that our Series : ");
        for(i=F; i<=R; i++)
        {
            printf("%d ", a[i]);
        }

    printf("\n\n");


    }
}
