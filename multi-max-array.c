#include<stdio.h>
void main()
{
    int a[9]={10,4,2,1,12,3,12,9,9}, max, i, pos[9], n;

    max=a[0];


    for(i=1; i<9; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max is %d\n", max);
n=0;
    for(i=0; i<9; i++)
    {
        if(max==a[i])
        {
            pos[n]=i+1;
            n++;

        }
    }
    for(i=0; i<n; i++)
    {
    printf("MAX is %d;  POS is %d;\n", pos[i]);
    }

}

