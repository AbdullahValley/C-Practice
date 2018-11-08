#include <stdio.h>
void main()
{
    int gcd, i, data_a, data_b;

    printf("Please Enter Two Integer Number: ");
    scanf("%d %d", &data_a, &data_b);

    for(i=1; i<=data_a && i<=data_b; i++)
    {
    if(data_a%i==0 && data_b%i==0)
    gcd=i;
    }

    printf("\nGCD Results is: %d\n", gcd);
}
