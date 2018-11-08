#include<stdio.h>

void main()
{
    int a=15, b=25, temp;

    while(b%a != 0)
    {
        temp = a;
        a = b%a;
        b = temp;
    }

printf("%d \n", a);

}
