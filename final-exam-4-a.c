#include<stdio.h>
void main()
{
    int i;
    int A[3]={10,20,30};
    int B[5]={40,50,60,70,80};

for(i=0; i<8; i++)
{
    B[i] = A[i];
    printf("%d ", A[i]);

}

}
