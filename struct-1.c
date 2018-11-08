#include<stdio.h>
#include<string.h>
#define NOS 3

struct student_DB
{
    int ID;
    char gender;
    char name[30];
    char district[15];
    float cgpa;
};

void main()
{
    struct student_DB stud[NOS];
    int i;

    for(i=0; i<NOS; i++)
    {
        printf("%d Student Name : ", i+1);
        scanf("%s", &stud[i].name);

        printf("%d Student ID : ", i+1);
        scanf("%d", &stud[i].ID);

        printf("%d Student CGPA : ", i+1);
        scanf("%f", &stud[i].cgpa);

        printf("%d Student Gender : ", i+1);
        scanf(" %c", &stud[i].gender);

        printf("%d Student District : ", i+1);
        scanf("%s", &stud[i].district);

printf("\n\n\n");

    }

    printf("\nThe Info of the students whose from DHAKA & MALE : \n\n");

    for(i=0; i<NOS; i++)
    {
        if(strcmp(stud[i].district,"DHAKA")==0 && stud[i].gender=='M')
        {
            printf("The Name of Student : %s\n", stud[i].name);
            printf("The ID of Student : %d\n", stud[i].ID);
            printf("The Gender of Student : %c\n", stud[i].gender);
            printf("The CGPA of Student : %.2f\n", stud[i].cgpa);
            printf("The District of Student : %s\n", stud[i].district);
        }
        printf("\n\n");
    }
}
