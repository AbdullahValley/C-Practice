#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("check.txt", "w");

    if(fp==NULL)
    {
        printf("Unable to open\n");
    }
    else
    {
        printf("File opened successfully\n");
    }
    fclose(fp);
}
