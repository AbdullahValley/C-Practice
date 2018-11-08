#include<stdio.h>
void main()
{
    int i;

for(i=10; i<100;)
{
    if(i>=50)
    {
        i=i+10;
    }
    else
        i=i+5;

    printf("%d ", i);
}
}
