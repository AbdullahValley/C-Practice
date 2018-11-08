#include<stdio.h>
int main(void)
{
    int i, s, j;
    for(i=1; i<=5; i++)
    {
        for(s=1; s<=5-i; s++)
        {
           printf("  ");
        }
        for(j=1; j<=(i*2)-1; j++)
        {
           printf("%d ", j);

        }

        printf("\n");
    }
    return 0;
}
