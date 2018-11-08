#include<stdio.h>
void main()
{
    int t1,t2,t3,b1,b2,b3,a1,a2,a3;

    printf("Today's Date (YYYY MM DD): ");
    scanf("%d%d%d",&t1,&t2,&t3);

    printf("Enter Birthday (YYYY MM DD): ");
    scanf("%d%d%d",&b1,&b2,&b3);

        if(t3<b3)
        {
            t3=t3+30;
            b2=b2+1;
        }

        if(t2<b2)
        {
          t2=t2+12;
          b1=t1+1;
        }

        if(t1<b1)
        {
            printf("\n\nERROR in Program ! ... \n\n");
        }

        else {
            a1=t3-b3;
            a2=t2-b2;
            a3=t1-b1;
            }

printf("\n\n%d-Year %d-Month %d-Day\n\n",a1,a2,a3);

}
