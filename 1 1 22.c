#include<stdio.h>
int main()
{
   int i;
   for(i=1;i<=9;)

  {
    printf("%d %d ",i, i);
    if(i>=5)
    i=i+4;

    else
    i=i+2;
  }

   return 0;
}
