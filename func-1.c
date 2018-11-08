/* This Function is about : Factorial by using Recursion from || Ariful Huq Sir || */

#include<stdio.h>

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n-1));
}

void main()
{
    int n; long f;

    printf("Enter an integer to find factorial\n");
    scanf("%d", &n);

    if(n < 0)
        printf("Negative integers are not allowed.\n");
    else
    {
        f = factorial(n);
        printf("%d! = %ld\n", n, f);
    }

}
