#include<stdio.h>

void main()
{
    char s[]="I am a CSE student";
    int i, j=0;

    for(i=0; i<strlen(s); i++)
    {
        if((s[i])>=65 && (s[i]<=90))
        {
            j++;
        }

    }
    printf("%d", j);

}
