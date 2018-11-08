#include<stdio.h>
 void main()
{
   int a[10], p, i, n;

   printf("Enter a limit: ");
   scanf("%d", &n);

   printf("Enter %d values: ", n);

   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

   printf("\nwhich position delete: ");
   scanf("%d",&p);

   if (p>=n+1 )
   {
       printf("Delete is not possible !");
   }
   else
   {
      for (i=p-1;i<n-1;i++)
        {
            a[i] = a[i+1];
        }
      printf("After Delete, Array is: ");

      for(i=0;i<n-1;i++)
    {
        printf("%d ", a[i]);
    }
   }
printf("\n");
}
