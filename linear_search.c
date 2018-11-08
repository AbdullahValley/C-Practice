#include<stdio.h>
#define size 5
void main()
{
    int a[size]={7,4,8,3,9};
    int i, item = 8;

    for(i=0; i<size; i++)
    {
        if(item == a[i])
        {
            printf("Found ...\n");
            break;
        }
    }

        if(i>=size)
        printf("NOT Found ! \n");
}
