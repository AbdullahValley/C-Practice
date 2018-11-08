#include <stdio.h>
#include <math.h>
void main()
{
   int binary,decimal=0,n=0,modulus=0;
   printf("Enter Any binary Number: ");
   scanf("%d",&binary);
   while(binary>0)
   {
       modulus=binary%10;
       decimal=decimal+pow(2,n)*modulus;
       n++;
       binary=binary/10;
   }
   printf("\nThe decimal Number is: %d\n",decimal);
}
