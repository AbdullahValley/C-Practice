#include <stdio.h>
void main()
{
    int a[50],i,n,sum=0;

    printf("Enter The limit: ");
    scanf("%d",&n);

    printf("Enter %d values : ",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nThe Sum is : %d\n",sum);
}
