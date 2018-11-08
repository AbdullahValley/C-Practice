#include <stdio.h>
float func_avg_run(int a,int b,int c)
{
    float avg_run;
    avg_run=(a+b+c)/3;
    return avg_run;
}
void main ()
{
    float x,y,z,R,S,T;

    printf("Enter The Run of Mushfiq : ");
    scanf("%f %f %f", &x, &y, &z);
    func_avg_run(x,y,z);
    R=func_avg_run(x,y,z);

    printf("Enter The Run of Riad : ");
    scanf("%f %f %f", &x, &y, &z);
    func_avg_run(x,y,z);
    S=func_avg_run(x,y,z);

    printf("Enter The Run of Bappa : ");
    scanf("%f %f %f", &x, &y, &z);
    func_avg_run(x,y,z);
    T=func_avg_run(x,y,z);

    printf("\nThe Mushfiq AVG are : %.2f\n", R);
    printf("The Riad AVG are : %.2f\n", S);
    printf("The Bappa AVG are : %.2f\n", T);
}
