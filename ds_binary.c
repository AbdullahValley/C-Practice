#include <stdio.h>
void main ()
{
int a[20],beg,end,item,mid,i,j,n,k,temp;
    printf("Enter a limit: ");
    scanf("%d",&n);
printf("Enter %d values : ",n);
for(i=1; i<=n; i++)
{
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
    for(j=1;j<=n-i;j++)
    {
    if(a[j]>a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
}
}
printf("The Sorting Number is :");
for(i=1; i<=n; i++)
{
printf(" %d",a[i]);
}
    beg=1;end=n;
    mid=(beg+end)/2;
    printf("\nEnter The Searching Item : ");
    scanf("%d",&item);
while((beg<end)&&(a[mid]!=item))
{
if(item<a[mid])
{
end = mid-1;
}
        else
        {
        beg = mid+1;
        }
        mid=(beg+end)/2;
}
    if(a[mid]==item)
    {
    printf("\nYes Found & Position is : %d\n",mid);
    }
    else
    {
    printf("\nSORRY ! Unsuccessful! Not Found\n");
}
}
