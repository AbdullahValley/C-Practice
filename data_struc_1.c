#include <stdio.h>
int main()
{
   int digit, rev = 0;
   printf("Enter an integer number to reverse : ");
   scanf("%d", &digit);
   while (digit != 0)
   {
      rev *= 10;
      rev += digit%10;
      digit /= 10;
   }
   printf("Reverse of entered number is = %d\n", rev);
   return 0;
}
