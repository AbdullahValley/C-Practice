#include<stdio.h>
int main()
{
    int w;
    printf("How many KG : ");
    scanf("%d", &w);

   switch (w)

   {
    case 1: printf("YES");
    break;

    default : printf("NO");
    break;
   }


    return 0;
}
