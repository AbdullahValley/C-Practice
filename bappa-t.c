#include <stdio.h>
void main ()
{
    int line,space,star,k,g;
    for(line=1;line<=5;line++)
    {
        for(space=1;space<=5-line;space++)
        {
            printf("");
        }
        for(star=1;star<=2*line-6;star++)
        {
            printf("*");
        }
        printf("");
    }
    for(k=1;k<=11-line;k++)
    {
        printf("  *\n");
    }
}
