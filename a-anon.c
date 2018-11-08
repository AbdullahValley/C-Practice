#include <stdio.h>
 void main()
  {
int i,s,st,l,q,x=49,n=11;
for(l=1;l<=x+1;l++)
{
printf(" ");
}
{
printf("*\n");
}
for(i=0;i<=n;i++)
{
for(s=1;s<=x-i;s++)
{
printf(" ");
}
{
printf("* ");
}
if(i==6)
{
for(q=0;q<=6;q++)
{
printf("* ");
}
}
if(i!=6)
{
for(st=1;st<=2*i;st++)
{
printf(" ");
}
{
printf("*");
}
}
printf("\n");
}
}
