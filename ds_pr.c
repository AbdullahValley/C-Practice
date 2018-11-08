#include<stdio.h>
void main()
{
    int a[10],n,i,item,p;

    printf("Enter a limit:");

    scanf("%d",&n);

    printf("Enter %d value:",n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Initial Array is: ");

    for(i=1;i<=n;i++)
    {

       printf("%d ", a[i]);

    }

    printf("\nEnter the position:");

    scanf("%d",&p);

    printf("Enter the insert item:");

    scanf("%d",&item);

    for(i=n;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p]=item;

    printf("After inserting is:");

    for(i=1;i<=n+1;i++)
    {
        printf("%d ",a[i]);
    }
}
