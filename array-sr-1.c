#include <stdio.h>
void main ()
{
    int i;
    int B[]={6,7,8,9,10};
    int A[5];

    for(i=0; i<5; i++)
    {
        A[i+5] = B[i];
        printf("A[%d]=%d\n", i, A[i+5]);
    }
}
