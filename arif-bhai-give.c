#include <stdio.h>
void main ()
{
    int i, x=0, y=0, z=0;
    for(i=0; i<=100; i++)
    {
        if(i%2==0  && i%5==0)
        {
        x++;
        }
        else if(i%5==0)
        {
        y++;
        }
        else if(i%2==0)
        {
        z++;
        }
    }
            printf("Two Count : %d\n", z);
            printf("Five is Count : %d\n", y);
            printf("Two-Five Count : %d\n", x);
}
