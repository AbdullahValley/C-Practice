#include <stdio.h>
int main ()
{
   int i;
   for(i=12;i<=150;)

  {
    printf("%d ",i);
    if(i>=30 && i<70)
    i=i+10;

    else if(i<=70)
    i=i+20;

    else
    i=i+6;
  }

   return 0;
}
