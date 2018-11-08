#include<stdio.h>
void main()
{
    int i;
    for(i=20; i<=1100;)
    {
        printf("%d ", i);
        if(i>=500)
            i=i+200;

        else if(i>=200 && i<500)
            i=i+100;

        else if(i>=50 && i<200)
            i=i+50;
        else
        {
            i=i+10;
        }
    }
}
