#include<stdio.h>
#include<conio.h>
void main ()
{
    char Name[30], Gender;
    int ID, Age;
    float CGPA;

printf("Enter Your ID : ");
scanf("%d", &ID);

getchar();
printf("Enter Your Name : ");
gets(Name);

printf("Enter Your Gender : ");
scanf("\n%c", &Gender);

printf("Enter Your CGPA : ");
scanf("\n%f", &CGPA);

printf("Enter Your Age : ");
scanf("\n%d", &Age);

printf("\nYour Name is :");
puts(Name);

printf("Your ID is : %d", ID);

printf("\nYour Gender is : %c", Gender);

printf("\nYour CGPA is : %.2f", CGPA);

printf("\nYour Age is : %d\n", Age);

}
