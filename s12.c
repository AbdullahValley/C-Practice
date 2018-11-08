#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void main()
  {
   float xf,yf, xb,yb,d,distance;
   int flag=0,vf=20,time=0;
   clrscr();
   randomize();
   xf=rand()%1001;
   yf=rand()%1001;
   xb=rand()%1001;
   yb=rand()%1001;
   while(flag==0)
    {
 d= (yb-yf)*(yb-yf)+(xb-xf)*(xb-xf);
 distance=sqrt(d);
 printf("time=%d   xf=%5.2f  yf=%5.2f  xb=%5.2f  yb=%5.2f  distance=%5.2f\n\n",time,xf,yf,xb,yb,distance);
 if(distance >100)
   {
    printf("The bomber plain was shot down at %d second\n",time);
    flag=1;
   }
 else if(distance>900)
   {
     printf("The bomber plane escaped from sight at %d second\n", time);
     flag=1;
   }
 else
   {
     xf=xf+vf*(xb-xf)/distance;
     yf=yf+vf*(yb-yf)/distance;
     xb=rand()%1001;
     yb=rand()%1001;
     time=time+1;
   }
    }
    getch();
}
