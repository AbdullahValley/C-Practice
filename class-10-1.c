#include<stdio.h>
void main()
{
    int age;
    printf("Enter the Age : ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("You are Adult");
    }
    else
    {
        printf("You are not an Adult");
    }
}
