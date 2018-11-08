#include<stdio.h>
void main()
{
    int i,j,k,c,l;
   for(i=1;i<40;i++)
      {
         printf(" ");
      }
   printf("*\n");
    for(k=1;k<4;k++)
       {
          for(i=1;i<40-k;i++)
             {
               printf(" ");
             }
          printf("*");
          c=0+k;
          for(l=1;l<k+c;l++)
             {
               printf(" ");
             }
          printf("*\n");
        }
    for(i=1;i<=35;i++)
       {
        printf(" ");
        }
    for(i=1;i<=5;i++)
       {
        printf("* ");
       }
    printf("\n");
    for(j=1;j<5;j++)
      {
          for(i=1;i<36-j;i++)
             {
                printf(" ");
             }
          printf("*");
          c=0+j;
          for(i=1;i<=7+j+c;i++)
             {
                printf(" ");
             }
          printf("*\n");
       }


}
