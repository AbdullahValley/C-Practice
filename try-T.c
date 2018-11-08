#include<stdio.h>
int main(void)
{
    int line, space, star;

    for(line=1; line==5;)
    {

        for(space=1; space<=5; space++)
        {
            printf("  ");

        }
        for(star=5; star<=4; star++)
        {
            printf("* ");
        }

        printf("\n");
    }


    return 0;
}

