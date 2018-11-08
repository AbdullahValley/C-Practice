#include<stdio.h>
#include<string.h>

void main()
{
    char Color[5][10];

    int i, j;
    char key[10];


for(i=0; i<5; i++)
{
    gets(Color[i]);
}

    for(j=1; j<5; j++)
    {

        strcpy(key, Color[j]);

        i = j-1;

        while(i>=0 && (strcmp(Color[i], key)>0) )
        {
            strcpy(Color[i+1], Color[i]);

            i = i-1;
        }

    strcpy(Color[i+1], key);

    }

    for(i=0; i<5; i++)
    {
        printf("%s ", Color[i]);
    }

    printf("\n\n");
}
