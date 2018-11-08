#include<stdio.h>

int main()
{
  char input;

  printf("Please Enter : ");

  scanf("%c", &input);


  switch (input)
        {
            case 'a' : printf("Sucessful\n");
            break;

            case 'b' : printf("Wonderful\n");
            break;

            case 'c' : printf("Thanks\n");
            break;

            default : printf("None \n");
            break;
        }

  return 0;

}


