#include<stdio.h>
#include<string.h>

void main()
{
    int A[5] = {7,2,9,3,6};
    int i, j, key;

    for(j=1; j<5; j++)
    {
        key = A[j];
        i = j-1;

        while(i>=0 && A[i] >= key)
        {
            A[i+1] = A[i];
            i = i-1;
        }

    A[i+1] = key;

    }

    for(i=0; i<5; i++)
    {
        printf("%d ", A[i]);
    }
}
