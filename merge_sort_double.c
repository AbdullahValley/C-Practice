#include<stdio.h>

void main()
{
    int i=0, j=0, k=0;
    int A[5] = {3,5,11,15,19};
    int B[5] = {2,7,12,40,45};
    int C[10];


    while(i<5 && j<5)
    {
        if(A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }

        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }

    while(i<5)
    {
        C[k++] = A[i++];
    }

    while(j<5)
    {
        C[k++] = B[j++];
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", C[i]);
    }
}
