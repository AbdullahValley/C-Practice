#include<stdio.h>

int main()
{
    int i, n, p, item, a[20];

    printf("Please Input Element Limit : ");
    scanf("%d", &n);

    printf("Enter %d Elements : ", n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Please Input Position for Insert : ");
    scanf("%d", &p);

    printf("Enter the insert item: ");
    scanf("%d",&item);

    for(i=n; i>=p-1; i--)
    {
        a[i+1]=a[i];
    }

    a[p]=item;

    printf("\n\n");
    printf("Now after Inserting the series is: ");

    for(i=1; i<=n+1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}
