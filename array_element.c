#include<stdio.h>
void main()
{
    int A[6] = {1,2,3,4,5,6}, B[10] = {7,8,9,10}, i, j=0;

    for(i=4; i<10; i++)
    {
        B[i] = A[j];
        j++;
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", B[i]);
    }
}
