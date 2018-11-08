#include<stdio.h>
void main()
{
    int digit, x;

   printf("Enter 2 digit number to reverse : ");
   scanf("%d", &digit);

    x=digit%10;
    digit=digit/10;

    printf("%d%d",x,digit);
}
