#include<stdio.h>
#define size 5
void main()
{
    int a[size]={7,4,8,3,9}, i, flag = 0, item = 3;

    while(i<size && !flag)
    {
        if(item == a[i])
        {
            flag = 1;
        }
    i++;
    }
        if(flag==1)
            printf("Found");
        else
            printf("NOT Found");
}

