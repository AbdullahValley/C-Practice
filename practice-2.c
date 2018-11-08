#include<stdio.h>

void main()
{
    int i;

    for(i=20; i<=100;)
    {
        printf("%d ", i);

        if(i>=50)
        {
            i=i+10;
        }
        else
        {
            i=i+5;
        }

    }

}

