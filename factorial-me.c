#include<stdio.h>
void main()
{
int i, results=1, input;

printf("Input Value : ");
scanf("%d", &input);

for(i=1; i<=input; i++)
{
    results=results*i;
}
printf("Results is : %d", results);

}
