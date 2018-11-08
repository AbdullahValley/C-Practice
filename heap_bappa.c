#include <stdio.h>
void main ()
{
    int a[10],item,i,j,n,temp;
    printf("Enter The Limit : ");
    scanf("%d", &n);

    printf("Enter %d values : ",n);
    for (i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter any item : ");
    scanf("%d",&item);
    j=n+1;
    a[j]=item;
    while((j<1)&&(a[j/2]>item))
    {
        a[j]=a[j/2];
        j=j/2;
    }
    a[j]=item;
    n=n+1;
    for (i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
