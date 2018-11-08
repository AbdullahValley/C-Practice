#include<stdio.h>
void main()
{
    printf("%d", test(7));
}
int test (int x)
{
    x -= 5;
    ++x;
    return x;
}
