#include<stdio.h>
void main()
{
    int line, space, star, head;

for(head=1; head<=11; head++)
{
    printf("* ");
}
    for(line=1; line<=10; line++)
    {

        for(space=1; space<=5; space++)
        {
            printf("  ");
        }

        for(star=1; star<2; star++)
            {
                printf("* ");
            }
        printf("\n");
    }


}

