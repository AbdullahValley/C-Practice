#include<stdio.h>
void main()
{
    long int d_num, result;
    int b_num[100], i=1, j;

    printf("Give Decimal Number : ");
    scanf("%ld", &d_num);

    result = d_num;

    while(result!=0)
    {
         b_num[i++]= result % 2;
         result = result / 2;
    }

    printf("\nTake Binary Number : ");

    for(j = i -1 ;j> 0;j--)

         printf("%d", b_num[j]);
         printf("\n");
}
