#include <stdio.h>   // Needed to use IO functions

int main()
{
// variable call
   int x,y,x1,y1,a,a1,b,b1,di_peri,di_area;
// Prompt user for an input

   printf("Enter the height and width of the 1st rectangle: \n");
   scanf("%d %d",&x,&y);

   a=x*y;
   b=2*(x+y);

   printf("Enter the height and width of the 2nd rectangle: \n");
   scanf("%d %d",&x1,&y1);

   a1=x1*y1;
    b1=2*(x1+y1);

    di_area=abs(a-a1);
    di_peri=abs(b-b1);

    printf("The difference of area is %d ",di_area );
    printf("The difference of perimeter is %d ",di_peri );

   }
