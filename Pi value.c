#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define SEED 35791246

main()
{
   int Action=0;
   double x,y;
   int i,count=0; /* # of points in the 1st quadrant of unit circle */
   double z;
   double pi;

   printf("Enter the number of actions used to find the value of pi: ");
   scanf("%d",&Action);

   /* initialize random numbers */
   srand(SEED);

   for ( i=0; i<Action; i++) {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      z = x*x+y*y;
      if (z<=1)
        count++;
      }
   pi=(double)count/Action*4;
   printf("Action of loop= %d , Estimate of pi is %g \n",Action,pi);
}
