#include <stdio.h>

void main()
{
int target, result, i=1;

printf("Enter number: ");
scanf("%d", &target);

printf("Namta of %d as below: \n", target);


while ( i < 11 ){
    result = target * i;
	printf("%d X %d = %d\n", target, i, result);
    i++;
	}


}
