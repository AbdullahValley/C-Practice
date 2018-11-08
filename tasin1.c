#include <stdio.h>   // Needed to use IO functions

int main()
{
// variable call
   int a,b,c,d,e,w,x;
   float y,z;
// Prompt user for an input
   printf("Enter the 5 input: \n");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
// here the calculation
 w=a+b;
 x=w-c;
 y=x/d;
 z=y*e;

printf("The result of the operations is %f ",z );

   }
