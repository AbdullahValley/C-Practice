#include<stdio.h>

void main()
{
    int i;
    for(i=5; i<=50; i=i+5)
    {
        if(i>20 && i<=30)
        {
            continue;
        }

        printf("%d ", i);
    }
}
