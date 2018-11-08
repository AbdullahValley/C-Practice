#include<stdio.h>
void main()
{
    int i,j,s,q,mid=40,n;

printf("Enter How Many Row You Want: ");
scanf("%d", &n);

    for(i=1;i<=mid;i++)
    {
        printf(" ");
    }
    printf("*\n");


    for(i=1;i<=n;i++)
    {
        for(s=1;s<=mid-i;s++)
        {
            printf(" ");
        }
        printf("*");


       if(i==5)
     {
      for(q=0;q<=4;q++)
      {
printf(" *");
      }
  }


  if(i!=5)
{
           for(s=1;s<=2*i-1;s++)
        {
          printf(" ");
        }
     {
        printf("*");
     }
    }
      printf("\n");
     }
}
