#include<stdio.h>

int main()
{
    char i;

    printf("Enter Data : ");
    scanf("%c", &i);


switch(i)
{
    case 'A': printf("ARGENTINA");
    break;

    case 'B': printf("BRAZIL");
    break;

    case 'C': printf("CHINA");
    break;

    case 'D': printf("DENMARK");
    break;

    default: printf("TRY AGAIN");
    break;
}

return 0;

}
