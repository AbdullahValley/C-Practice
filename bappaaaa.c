#include <stdio.h>
void main ()
{
    int a=21,b=10,c,d,e;
    c=a+b;
    printf("Line 1 is %d\n",c);
    c=a-b;
    printf("Line 2 is %d\n",c);
    c=a*b;
    printf("Line 3 is %d\n",c);
    c=a/b;
    printf("Line 4 is %d\n",c);
    c=a%b;
    printf("Line 5 is %d\n",c);
    c=++a;
    printf("Line 6 is %d\n",c);
    c=--a;
    printf("Line 7 is %d\n",c);
}
