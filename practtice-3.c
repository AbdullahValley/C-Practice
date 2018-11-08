#include<stdio.h>

void main()
{
    int i;

    for(i=1; i<10;)
    {
        printf("%d %d ", i, i);

        if(i>=5)
        {
            i=i+4;
        }
        else
        {
            i=i+2;
        }

    }

}


