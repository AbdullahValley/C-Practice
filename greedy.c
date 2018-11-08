#include<stdio.h>

void main()
{
    int i, j, amount = 519;

    int coins[9] = {1000,500,100,50,20,10,5,2,1};

    int count = 0;

    for(i=0; i<9; i++)
    {
        while(amount >= coins[i])
        {
            amount = amount - coins[i];
            count++;
        }
    }

    printf("Number of coins used : %d\n", count);


}
