#include<stdio.h>
int main()
{
    float SSC_GPA, HSC_GPA;

    printf("Please Input Your SSC GPA : ");
    scanf("%f", &SSC_GPA);

    printf("Please Input Your HSC GPA : ");
    scanf("%f", &HSC_GPA);

    if(SSC_GPA>=4.8 && HSC_GPA>=4.0)
    {
        printf("\nYou are Eligible for Scholarship\n");
    }


    return 0;
}
