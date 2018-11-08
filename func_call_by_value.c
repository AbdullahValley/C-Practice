#include<stdio.h>

void call_by_value(int *x)
{
    printf("\nInside call_by_value x = %d before adding 10.\n", *x);
    *x+=10;
    printf("\nInside call_by_value x = %d after adding 10.\n", *x);
}
void main()
{
    int a=10;
    printf("\na = %d before function call_by_value.\n", a);
    call_by_value(&a);
    printf("\na = %d after function call_by_value.\n", a);
}
