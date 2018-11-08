#include<stdio.h>
 float k1 = 0.025,k2 = 0.01,t=0,del_t=0.1;
 float calc_c1(float c1, float c2, float c3)
 {
   return (c1+(k2*c3-k1*c1*c2)*del_t);
 }
 float calc_c2(float c1, float c2, float c3)
 {
   return (c2+(k2*c3-k1*c1*c2)*del_t);
 }
 float calc_c3(float c1, float c2, float c3)
 {
   return (c3+(2*k1*c1*c2-2*k2*c3)*del_t);
 }
 int main()
 {
   float c1 = 50,c2 = 25, c3 =0;
   int i;
   float temp_c1,temp_c2,temp_c3;

   printf("%.2f %.2f %.2f",c1,c2,c3);
   for(i=0;i<10;i++)
   {
     temp_c1 = calc_c1(c1,c2,c3);
     temp_c2 = calc_c2(c1,c2,c3);
     temp_c3 = calc_c3(c1,c2,c3);
      t=t+del_t;
     c1 = temp_c1;
     c2 = temp_c2;
     c3 = temp_c3;

      printf("\nt=%.1f c1=%.2f c2=%.2f c3=%.2f\n",t,c1,c2,c3);
   }
   printf("\nlast value of t=%.2f,c1=%.2f last value of c1= %.2f last value of c1= %.2f\n",t,c1,c2,c3);

   return 0;
 }
