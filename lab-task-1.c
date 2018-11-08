#include<stdio.h>

int main()
{
  int input_1, input_2;

  printf("Please Enter Two Values : ");


  scanf("%d %d", &input_1, &input_2);

  if(input_1>input_2){
    printf("First Input is largest and It is = %d \n", input_1);
    printf("Second Input is Lowest = %d\n", input_2);
    }

  else if(input_1<input_2){
    printf("Second Input is largest and It is = %d \n", input_2);
    printf("First Input is Lowest = %d \n", input_1);
    }

  return 0;

}

