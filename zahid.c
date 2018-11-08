#include<stdio.h>
void main ()
{
int a=2, b=3, c=4, d;

d=b++ + ++b - ++c + b++;

printf("%d\n", b);
printf("%d", d);

}
