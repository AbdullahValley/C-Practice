#include<stdio.h>
void main()
{
    int a[9]={9,4,2,1,10,3,7,9,9}, max, i, pos;

    max=a[0];
    pos=1;

    for(i=1; i<9; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            pos=i+1;
        }
    }
    printf("MAX is %d;  POS is %d;\n", max, pos);
}
