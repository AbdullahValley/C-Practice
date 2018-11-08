#include<stdio.h>
int main()
{
    int day;

    printf("Please Input Day : ");
    scanf("%d", &day);


    if(day==0)
    {
        printf("\nSunday\n");
    }

    if(day==1)
    {
        printf("\nMonday\n");
    }
    if(day==2)
    {
        printf("\nTuesday\n");
    }
    if(day==3)
    {
        printf("\nWednesday\n");
    }
    if(day==4)
    {
        printf("\nThursday\n");
    }
    if(day==5)
    {
        printf("\nFriday\n");
    }
    if(day==6)
    {
        printf("\nSaturday\n");
    }

    else if(day<=0 || day>=7)/*here is some error because i use 0 as sunday & day<=0 */
    {
        printf("\nERROR in Input\n");
    }


    return 0;
}

