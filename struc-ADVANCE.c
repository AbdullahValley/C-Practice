#include<stdio.h>
#define NOS 2
void main()
{
int i,n,pos[NOS];
float max_cgpa;

struct student_DB
{
  int ID;
  char name[20];
  char  gender;
  float cgpa;
 };
struct student_DB stud[NOS];


printf("Enter the data for Student Database\n\n");

for (i=0; i<=NOS; i++)
{
    printf ("Enter the ID of Student %d :",i+1);
    scanf("%d",&stud[i].ID);

    printf ("Enter the Name of Student %d :",i+1);
    scanf("%s",stud[i].name);

    printf ("Enter the Gender of of Student %d :",i+1);
    scanf(" %c",&stud[i].gender);

    printf ("Enter the CGPA of of Student %d :",i+1);
    scanf("%f",&stud[i].cgpa);

    printf ("\n\n");

}

max_cgpa = stud[0].cgpa;

for (i=1; i<NOS; i++)
{

	if (stud[i].cgpa >max_cgpa)
	{

	  max_cgpa  = stud[i].cgpa;

	}

}

n = 0;
for (i = 0; i<NOS; i++)
{

    if (stud[i].cgpa==max_cgpa )
	{

	  pos[n] = i;
	  n++;

	}

}

printf ("\nThe INFO of the Student who obtained highest CGPA \n\n");

for (i=0; i <n; i++)
{

  	printf ("The name of Student : %s\n",stud[pos[i]].name);
	printf ("The ID  of the student : %d\n",stud[pos[i]].ID);
	printf ("Obtained CGPA : %.2f\n\n", stud[pos[i]].cgpa);
}
}



