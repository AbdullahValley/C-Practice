#include<stdio.h>
void main()
{
    FILE *fptr;

    char name[30]; char country[20];
    float innings; float bowl_avg;
    int age;

    fptr = fopen("info_mashrafee.txt", "w");

    if(fptr==NULL)
    {
        printf("Unable to open\n");
    }

    printf("Enter the name of Player : ");
    scanf("%s",&name);
    fprintf(fptr, "Name = %s\n", name);


    printf("Enter the Age : ");
    scanf("%d",&age);
    fprintf(fptr, "Age = %d\n", age);

    printf("Enter the Country : ");
    scanf("%s", country);
    fprintf(fptr, "Country = %s\n", country);

    printf("Enter the Number of Innings : ");
    scanf("%f",&innings);
    fprintf(fptr, "Country = %f\n", innings);

    printf("Enter the Number of Bowling Average : ");
    scanf("%f",&bowl_avg);
    fprintf(fptr, "Country = %f\n", bowl_avg);

    fclose(fptr);
}
