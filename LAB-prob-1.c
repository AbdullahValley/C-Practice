#include<stdio.h>

int main()
{
    char gender;
    float ssc, hsc;

    printf("Enter Your Gender : ");
    scanf("%c", &gender);

    printf("Enter Your SSC GPA : ");
    scanf("%f", &ssc);

    printf("Enter Your HSC GPA : ");
    scanf("%f", &hsc);

if((gender=='M') && (ssc>=4.8 && hsc>=4.0))
    printf("You are Able to get MALE Scholarship");

else if((gender=='F') && (ssc>=4.5 && hsc>=4.0))
    printf("You are Able to get FEMALE Scholarship");

else
    printf("You are NOT Able to get Scholarship");

return 0;

}
