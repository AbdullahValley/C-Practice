#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tail,head,i,n,j,difference=0,result,toss;

    printf("How many time you want to play ? \n");
    scanf("%d",&n);
    printf("\n");

    tail = 0;
    head = 0;

    printf("Serial \t Head: \t Tail: \t Difference: \t\n");

    for(i=1; i<=n; i++)
    {
        j = 1;


        while(1)
        {

            toss = rand() % 10;

            if(toss > 4)
            {
                tail = tail + 1;
            }
            else
            {
                head = head + 1;
            }


            difference = abs((head - tail));
            printf("%d\t%d\t%d\t%d\n",j,head,tail,difference);

            if(difference == 3)
            {
                result = 8 - j;

                if(result < 0)
                {
                    printf("You lose %d Coin\n",abs(result));
                }
                else
                {
                    printf("You win %d Coin\n",abs(result));
                }

                break;
            }

            j++;
        }
    }
    return 0;
}

