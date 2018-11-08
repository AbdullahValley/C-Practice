#include<stdio.h>
void main()
{
    int run1,run2,avearage;

    printf("enter the batsman's run : ");
    scanf("%d %d", &run1, &run2);

    avearage=(run1+run2)/2;

    if(avearage>70)
    {
    printf("good batsman");
    }
        else if(avearage>=55 && avearage<=70)

   {
        printf("normal batsman");
    }
}
