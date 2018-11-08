#include <stdio.h>
#include<stdlib.h>
int main() {

    float c1=50.0, c2=25.0, c3=0.0,k1=0.025, k2=0.01,i,t,s;

    printf("time interval:");
    scanf("%f",&t);

    printf("simulate upto:");
    scanf("%f",&s);

    for(i=0.00; i<=s; i+=t)
    {
        printf("%.2f, %.2f, %.2f, %.2f\n", i, c1, c2, c3);

        c1= c1 + (k2*c3 - k1*c1*c2)*0.01;
        c2= c2 + (k2*c3 - k1*c1*c2)*0.01;
        c3= c3 + (2*k1*c1*c2 - 2*k2*c3)*0.01;
    }

    return 0;
}
