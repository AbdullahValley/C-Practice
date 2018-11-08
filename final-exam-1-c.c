#include<stdio.h>

void main()
{
    int i;
    for(i=0; i<90; i+=5)
    {
        if(i%2!=0 && i>43)
        {
            printf("%d ", i);
        }
    }

}

