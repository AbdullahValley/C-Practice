#include<stdio.h>

void main()
{
    int a[6], i, n, max, item, top, option;

    printf("Enter a limit: ");
    scanf("%d", &n);

    max = 6; top = n;

    if(n==0)
    {
        printf("\nUnderflow\n");
        return 0;
    }

    if(top>max)
    {
        printf("\n\nOverflow\n\n");
        return 0;
    }

    else
    {
    printf("Enter %d values: ", n);
    for(i=1; i<=n; i++)
    {
         scanf("%d",&a[i]);
    }

    printf("Enter an Option (1) PUSH, (2) POP, (3) EXIT : ");
    scanf("%d", &option);

switch (option)
        {

        case 1: printf("\n\nYour Choice is PUSH : NOW We are Inserting.\n\n");

                printf("Enter a Inserting Item: ");
                scanf("%d", &item);

                top=top+1;
                a[top]=item;

                printf("\nAFTER Insert the Values are : ");

                for(i=1; i<=top; i++)
                {
                    printf("%d ",a[i]);
                }
        break;


        case 2: printf("\n\nYour Choice is POP : NOW We are Deleting.\n\n");

                top=top-1;

                printf("\nAFTER delete the Values are : ");

                for(i=1; i<=top; i++)
                {
                     printf("%d ",a[i]);
                }
        break;


        default: printf("\n\nYour Choice is EXIT : NOW - TaTa ! By By ... \n\n");
        break;

        }
    }
    printf("\n\n");
}
