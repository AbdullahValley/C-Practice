#include<stdio.h>
#include<string.h>

void main()
{
    char s1[10]="adcb";
    char s2[10]="admb";
    char s3[10];
    int l;

    l = strlen(s1);
    strcpy(s3, s1);
    l = strcmp(s2,s1);
    printf("%d\n", l);
}
