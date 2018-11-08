#include<stdio.h>
#include<math.h>
void main()
{
    int a, a1, c, i, rem, sum, n, count=0;

    printf("Enter a Binary Number : ");
    scanf("%d", &a);

    //a1=a;

    while(a!=0)
    {
        a=a/10;
        count++;
    }

for(i=0; i<=6; i++)
    {
        a=a%10;
        a=a/10;
        c=rem*pow(2, i-1);
        sum=sum+c;
    }

       printf("\nBinary to Decimal is = %d\n", sum);

}
