#include<stdio.h>
int main()
{
    char input[55];

    int n, i, j, times;

    printf("How many inputs you want to take ? : \n\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {

    printf("Please input string for %d : ", i);
    scanf(" %s", &input);

    printf("How many times you want to print ? : ");
    scanf("%d", &times);

        for(j=1; j<=times; j++)
        {
            puts(input);
        }
    }

     return 0;
}
