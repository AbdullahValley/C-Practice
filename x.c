#include <stdio.h>
int avg_run(int day1, int day2, int day3);         // function prototype
int main()
{
    int r1,r2,r3,avg;
    printf("Enters three run of musfiq: \n");
    scanf("%d %d %d",&r1,&r2,&r3);

      avg = avg_run(r1, r2, r3);        // function call
      printf("avg run of mus= %d \n",avg);

     printf("Enters three run of tamim: \n");
     scanf("%d %d %d",&r1,&r2,&r3);

      avg = avg_run(r1, r2, r3);        // function call
      printf("avg run of tamim = %d \n",avg);

     printf("Enters three run of mahmudullah: \n");
     scanf("%d %d %d",&r1,&r2,&r3);

    avg = avg_run(r1, r2, r3);        // function call
    printf("avg run of mahmudullah = %d \n",avg);

    return 0;
}

int avg_run(int day1,int day2,int day3)         // function definition
{
    int result;
    result = (day1+day2+day3)/3;
    return result;                  // return statement
}
