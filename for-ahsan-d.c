#include<stdio.h>

void main()
{
    char s[]="11001101";
    int i=0, count=0;

    while(s[i]!='\0'){
        if(s[i]=='1')
            count++;
        else s[i]=88;
        i++;
    }
    printf("%d\n", count);
    puts(s);
}
