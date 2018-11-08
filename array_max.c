#include<stdio.h>
void main()
{


int a[3]={12,20,30};

int max = a[0], i, location=1;

for(i=0; i<3; i++)
{
    if(a[i]>max)
    { max = a[i];
    location = i+1;

    }
}

printf("%d", max);
printf("\n%d", location);
}
