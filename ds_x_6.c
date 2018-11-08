#include<stdio.h>
int main()
{
    int a[20],i,x,n;
    printf("Enter The Limit : ");
    scanf("%d",&n);

    printf("Enter %d array elements: ",n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element for search: ");
    scanf("%d",&x);
    for(i=0;i<n;++i)
    {
        if(a[i]==x)
        break;
    }
    if(i<n)
        printf("SUCEESS ! Element location is : %d\n",i+1);
    else
        printf("SORRY ! Element NOT Found !\n");

    return 0;
}
