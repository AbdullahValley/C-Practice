#include<stdio.h>
int main()
{
    float ssc_gpa, hsc_gpa;
    char gender;

    printf("Enter Your Gender = ");
    scanf("%c",&gender);
    printf("Enter your SSC GPA = ");
    scanf("%f",&ssc_gpa);
    printf("Enter your HSC GPA = ");
    scanf("%f",&hsc_gpa);
{
        if((gender=='M') && (ssc_gpa>=4.8) && (hsc_gpa>=4.0))
        {
            printf("You will get Male scholarship\n");
        }
       else if((gender=='F') && (ssc_gpa>4.0) || (hsc_gpa>4.5))
        {
            printf("You will get Female scholarship\n");
        }
        else
            printf("You will not eligible for scholarship\n");
}
    return 0;
}
