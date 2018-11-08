#include<stdio.h>
void main()
{
    int a[6], i, n, top, max, item, option;

    printf("Enter the Limit: ");
    scanf("%d", &n);

    printf("The %d Series : ", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    top = n;

    while (option != 3)
    {
        max=6;

        if(option == 1)
        {
            printf("\nEnter the Inserting Item: ");
            scanf("%d", &item);

            if(top>=max)
            {
                printf("\nOverflow\n");
                return 0;
            }

            else
            {
                top = top + 1;

                a[top] = item;

                printf("\nAfter the Insert Series's are : ");

                for(i=1; i<=top; i++)
                {
                    printf("%d ", a[i]);
                }

            }
        }

        if(option == 2)
        {
            if(top==0)
            {
                printf("\nUnderflow\n");
                return 0;
            }

            else
            {
                top = top - 1;

                printf("\nAfter Delete Series's are : ");

                for(i=1; i<=top; i++)
                {
                    printf("%d ", a[i]);
                }
            }
        }

        printf("\n\nIf Continue : So, \n\n1.PUSH  2.POP  3.EXIT : ");
        scanf("%d", &option);
    }
}
