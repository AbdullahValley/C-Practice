#include<stdio.h>

void main()
{
    int a[10],i,n,max,item,top;

    printf("Enter a limit: ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    for(i=1; i<=n; i++)
    {
         scanf("%d",&a[i]);
    }

    max=10;

    top=n;


    if(top>=max)
    {
        printf("\n\nOverflow\n\n");
        return 0;
    }

    else
    {
        top=top-1;

    }

    printf("AFTER Delete values: ");

    for(i=1; i<=top; i++)
    {
         printf("%d ",a[i]);
    }

    printf("\n\n");

}
