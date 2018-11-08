#include<stdio.h>

    int a[6], i, n, max, item, top, option, sub_option;

void main()
{
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

                push();
                my_option();
        break;

        case 2: printf("\n\nYour Choice is POP : NOW We are Deleting.\n\n");

                pop();
                my_option();
        break;

        default: printf("\n\nYour Choice is EXIT : NOW - TaTa ! By By ... \n\n");
        break;

        }
    }
    printf("\n\n");
}

void push()
{
                printf("\nEnter a Inserting Item: ");
                scanf("%d", &item);

                top=top+1;
                a[top]=item;

                printf("\nAFTER Insert the Values are : ");

                for(i=1; i<=top; i++)
                {
                    printf("%d ",a[i]);
                }
}

void pop()
{
                top=top-1;
                printf("\nAFTER delete the Values are : ");

                for(i=1; i<=top; i++)
                {
                     printf("%d ",a[i]);
                }
}

void my_option()
{
    printf("\n\nDo You want to Continue ?? (4=Yes / 5=No) : ");
                scanf("%d", &sub_option);

                while(sub_option == 4)
                {

                if(sub_option==4)
                {
                printf("\n\nEnter an Option (1) PUSH, (2) POP, (3) EXIT : ");
                scanf("%d", &option);

                        if(option==1)
                        {
                        push();
                        }

                        else if(option==2)
                        {
                        pop();
                        }

                        else
                        {
                            return 0;
                        }

                }

                else if(sub_option==5)
                {
                    return 0;
                }
                } // end while

}
