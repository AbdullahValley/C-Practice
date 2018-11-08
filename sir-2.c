#include<stdio.h>
#include<conio.h>
int main()
{
    float SSC_GPA, HSC_GPA;
    char gender;

    printf("Please Input Your SSC GPA : ");
    scanf("%f", &SSC_GPA);

    printf("Please Input Your HSC GPA : ");
    scanf("%f", &HSC_GPA);

    getchar();
    printf("Please Enter Your Gender : ");
    scanf("%c", &gender);

    if(gender="M" && SSC_GPA>=4.8 && HSC_GPA>=4.0)
    {
        printf("\nYou are Eligible for Scholarship\n");
    }

    if(gender="F" && SSC_GPA>=4.0 && HSC_GPA>=3.0)
    {
        printf("\nHey Girl ! You are Eligible for Scholarship\n");
    }


    return 0;
}

