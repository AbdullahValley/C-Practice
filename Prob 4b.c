#include<stdio.h>
#include<string.h>
void main ()
{
    char Gender, Name[30];
    int ID, Age;
    float CGPA;

printf("Enter Your ID : ");
scanf("%d", &ID);

printf("Enter Your Name : ");
scanf("%s", &Name);
getchar();

printf("Enter Your Gender : ");
scanf("\n%c", &Gender);

printf("Enter Your CGPA : ");
scanf("\n%f", &CGPA);


printf("Enter Your Age : ");
scanf("\n%d", &Age);


printf("\nYour ID is : %d", ID);

printf("\nYour Name is : %s", Name);


printf("\nYour Gender is : %c", Gender);

printf("\nYour CGPA is : %.2f", CGPA);

printf("\nYour Age is : %d", Age);




}
