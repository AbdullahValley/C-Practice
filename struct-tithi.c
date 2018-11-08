#include<stdio.h>
#include<string.h>
#define NOS 4

struct student_DB
{
    int id;
    char name[30];
    float cgpa;
    char h_district[15];
    char gender;
};
void main()
{


struct student_DB stud[NOS];
int i;

for(i=0;i<NOS;i++)
{
    printf("enter the name of student %d:",i+1);
    scanf("%s",stud[i].name);

    printf("enter the ID of the student %d:",i+1);
    scanf("%d",&stud[i].id);

    printf("enter the CGPA of the student %d:",i+1);
    scanf("%f",&stud[i].cgpa);

    printf("enter the GENDER of the student %d:",i+1);
    scanf("%c",&stud[i].gender);
    getchar();

    printf("enter the HOME DISTRICT of the student %d:",i+1);
    scanf("%s",stud[i].h_district);

    printf("\n\n");

}
printf("\n the info of the student whose home in DHAKA and whose are FEMALE:\n\n");

for(i=0;i<NOS;i++)
{


    if(strcmp(stud[i].h_district,"DHAKA")==0 && strcmp(stud[i].gender,"female")==0)
{
    printf("the name of the student :%s\n",stud[i].name);
    printf("the id :%d\n",stud[i].id);
    printf("the gender :%c\n",stud[i].gender);
    printf("the cgpa is :%.2f\n\n",stud[i].cgpa);
    printf("the name of HD is :%s\n",stud[i].h_district);
}
}
}
