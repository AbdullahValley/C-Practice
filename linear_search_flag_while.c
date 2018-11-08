#include<stdio.h>
#define size 5
void main()
{
    int a[size]={7,4,8,3,9}, i, flag = 0, item = 3;

    for(i=0; i<size && !flag; i++)
    {
        if(item == a[i])
        {
            printf("Found ...\n");
            flag = 1;
        }
    }

        if(i>=size)
        printf("NOT Found ! \n");
}
