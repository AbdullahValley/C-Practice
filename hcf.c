#include <stdio.h>
void main()
{
    int hcf, lcm, i, data_a, data_b;

    printf("Please Enter Two Integer Number: ");
    scanf("%d %d", &data_a, &data_b);

    for(i=1; i<=data_a || i<=data_b; i++)
    {
    if(data_a%i==0 && data_b%i==0)
    hcf=i;
    }

    printf("\nHCF Results is: %d\n", hcf);

    lcm=(data_a*data_b)/hcf;

    printf("\nLCM Results is: %d\n", lcm);
}
