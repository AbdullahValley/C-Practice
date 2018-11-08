/*Binary To Decimal Convert Program*/
#include <stdio.h>
#include <math.h>
int main()
{
   int bin,deci=0,n=0,mod=0;
   printf("Enter Any Binary Number: ");
   scanf("%d",&bin);
   while(bin>0)
   {
       mod=bin%10;
       deci=deci+pow(2,n)*mod;
       n++;
       bin=bin/10;
   }
   printf("\nThe Decimal Number is: %d\n",deci);
   return 0;
}
