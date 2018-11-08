#include<stdio.h>
int test(int x)
{
    x-=5;
    ++x;;
    return x;
}

void main()
{
   printf("%d", test(7));
}
