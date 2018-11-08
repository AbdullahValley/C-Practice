#include<stdio.h>
void main()
{
  int i;
  char n;
    while(i)
        {
            printf("\nEnter the character:- ");
            scanf(" %c", &n);

            if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U')
             {
                printf("This is Vowel\n");
             }
                else
                 {
                    printf("This is Consonent\n");
                 }
        }
}
