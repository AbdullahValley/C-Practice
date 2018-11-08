#include<stdio.h>

void main()
{
    char i;

    printf("Please Enter the Charecter : ");
    scanf("%c", &i);

    if(i=='a' || i=='A' || i=='e' || i=='i' || i=='o' || i=='u')
    {
         printf("\nAnon You Enter a VOWEL\n");
    }

    else
    {
         printf("\nHey ! ASIF You Enter a CONSONANT\n");

    }
}
