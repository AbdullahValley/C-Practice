#include <stdio.h>

void main()
{
    int a[10],i,n,p,item,z=0;
    printf("Enter Limit: ");
    scanf("%d",&n);
    printf("\nEnter %d value: ",n);


    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    z=a[i];
    printf("\n\nEnter the position: ");
    scanf("%d",&p);

    printf("\n\nEnter the Inserting item: ");
    scanf("%d",&item);



    for(i=n;i>=p;i--)
    {
        a[i+1]=a[i];
    }
    //printf("%d",a[i+1]);

    a[p]=item;
    for(i=1;i<=n+1;i++)
    {
        printf("\n\nInitial Array: %d",a[i]);
    }
    printf("\n\nwhich item you want to insert: %d",&a[p]);

    printf("\nAfter inserting: %d\n",a[p]);

}
