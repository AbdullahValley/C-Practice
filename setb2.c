#include<stdio.h>
void main()
{
    int n,i,k,a[7],temp=0,j;
    printf("Enter no of elements of the array:");
    scanf("%d",&s);

    printf("Enter %d values:",n);
     for (i=1;i<n;i++)
     {
        scanf("%d",&A[I]);
     }


     for(K=1)
     {
         for(j=0;j<=i;j++)
         {
             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j=1];
                 a[j+1]=temp;
             }
         }
     }
    printf("After sorting");
    for(i=0;i<s;i++)
        printf("%d",a[i]);



}
