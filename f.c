#include<stdio.h>


#include<math.h>

void main()
{
   int i,v=20,time=15,xb[15]={100,110,120,129,140,149,158,168,179,188,198,209,219,226,234,240};
   int yb[15]={0,3,6,10,15,20,26,32,37,34,30,27,23,19,16,14};
   float yf[15],xf[15],dist,Xsq,Ysq,sin,cos;
   xf[0]=0;
   yf[0]=60;
   printf("\t\t\tMISSION STARTS TO DESTROY THE BOMBER\n");
   for(i=0;i<=time;i++)
           {
          Ysq=(yb[i]-yf[i])*(yb[i]-yf[i]);
          Xsq=(xb[i]-xf[i])*(xb[i]-xf[i]);
                dist=sqrt(Xsq+Ysq);
      printf("\n\nAt time : %d minute",i);
      printf("\nThe distance between fighter and bomber : %5f",dist);
         if(dist<=10.0)
                 {

             printf("\n\n\n\t************SUCCESSFUL************\n\tThe BOMBER destroyed by The FIGHTER\n");

             printf("\n\nThe position of bomber destroyed at  : (X=%d , Y=%d) ",xb[i],yb[i]);
             printf("\n\nThe position of fighter destroy at   : (X=%5f , Y=%5f) ",xf[i],yf[i]);
                      break;
                 }
      sin=(yb[i]-yf[i])/dist;
      cos=(xb[i]-xf[i])/dist;
      xf[i+1]=xb[i]+v*sin;
      yf[i+1]=yb[i]+v*cos;
           }
     if(i>time)

     printf("\n\n\n\t**************UNSUCCESSFUL**************\n\tThe FIGHTER failed to destroy The BOMBER");
     printf("\n\n\nThe last position of bomber at   : (X=%d , Y=%d) ",xb[i],yb[i]);
     printf("\n\nThe last position of fighter at  : (X=%5f , Y=%5f) ",xf[i],yf[i]);

   getch();
}
