#include<stdio.h>
#include<string.h>
void main ()
{
    char Gender, Name[30];
    int ID, Age;
    float CGPA;

printf("Enter Your ID : ");
scanf("%d", &ID);

printf("\nEnter Your Name : ");
scanf("%s", &Name);
getchar()

printf("\nEnter Your Gender : ");
scanf("%c", &Gender);

printf("\nEnter Your CGPA : ");
scanf("%f", &CGPA);


printf("\nEnter Your Age : ");
scanf("%d", &Age);


printf("\nYour ID is : %d", ID);

printf("\nYour Name is : %s", Name);


printf("\nYour Gender is : %c", Gender);

printf("\nYour CGPA is : %.2f", CGPA);

printf("\nYour Age is : %d", Age);




}
