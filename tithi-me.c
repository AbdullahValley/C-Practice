#include<stdio.h>
int main(void)
{
    int line, space, star;
    for(line=1; line<=5; line++)
    {
        for(space=1; space<=25-line; space++)
        {
            printf("  ");
        }

        for(star=1; star<=(line*2)-1; star++)
            {
                printf("* ");
            }
        printf("\n");
    }

    return 0;
}

