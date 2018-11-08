#include<stdio.h>
void main()
{
int i=2, flag = 0, n = 21;

    while(i <= n/2)
    {
        if(n % i == 0)
        {
            flag=1;
            break;
        }
    ++i;
    }
    if (flag==0)
        printf("%d is a Prime Number. \n", n);
    else
        printf("%d is NOT... a Prime Number. \n", n);
}
