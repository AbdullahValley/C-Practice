#include<stdio.h>
void main()
{
    int x[5]={1,2,3,4,5};
    int i, results=0;
    for(i=0;i<5;i++)
    {
     results+=x[i];
    }
    printf("The results x is %d\n", results);
}
