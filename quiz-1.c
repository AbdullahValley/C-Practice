#include<stdio.h>

void main()
{
    int i;
    for(i=5; i<=70; i=i+5)
    {
        if(i>15 && i<=30)
        {
            continue;
        }

        if(i==50)
        {
            break;
        }
        printf("%d ", i);
    }
}
