#include<stdio.h>
void main()
{
    int A, B, C, X, Y;
    scanf("%d%d%d",&A,&B,&C);
    X = (A+B+abs(A-B))/2;
    Y = (X+C+abs(X-C))/2;
    printf("%d eh o maior\n", Y);
}
