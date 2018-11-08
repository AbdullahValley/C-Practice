#include <stdio.h>
void main ()
{
    int a[5],top,n,i,item,opt;
    printf("Enter The Limit : ");
    scanf("%d",&n);

    if(n==0)
    {
        printf("Underflow & The process is terminated.\n");
        return 0;
    }

    else
    {
        top=n;
        printf("Enter %d values : ",n);
        for(i=1;i<top;i++)
        {
            scanf("%d ",&a[i]);
        }

        printf("Enter The Deleting Value : ");
        scanf("%d ",&item);

        top=top-1;

        printf("The new values are : ");

        for(i=1;i<=top;i++)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");

    printf("Do you want to continue : ");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&opt);
        if(n==0)
        {
            printf("Underflow & The process is terminated.\n");
            return 0;
        }
        else if(opt==1)
        {
            printf("Enter The Deleting Value : ");
            scanf("%d",&item);
            top=top-1;

            printf("The new values are : ");
            for(i=1;i<=top;i++)
            {
                printf("%d ",a[i]);
            }
        }
        else if(opt==2)
        {
            return 0;
        }
    }
}
