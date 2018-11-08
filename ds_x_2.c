#include <stdio.h>
void main()
{
int i,sum=0,n,a[10];

    printf("Enter any Limit : ");
    scanf("%d",&n);

    printf("Input %d Values : ",n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<10)
        {
            printf("\nValues less than 10 : %d ", a[i]);
            sum=sum+a[i];
        }
    }
    printf("\n\nThe Total is : %d\n",sum);
}
