#include<stdio.h>
void main()
{
  int i,count;
  char n;

    printf("Enter the character:- ");

   for(i=0; i<=count; i++)
   {
     scanf("%c",&n);

     if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
     {
        printf("This is Vowel=%c\n",n);
        printf("\nEnter the character:- ");
     }

     else if((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
     {
             printf("This is Consonent=%c\n",n);
             printf("\nEnter the character:- ");
     }

     else{
        printf("");
        }
    }
}
