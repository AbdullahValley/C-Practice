#include<stdio.h>
void main()
{
    int i, a[5], max=5, F, R, n;

    printf("Enter the Limit : ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("Under Flow");
        return 0;
    }

    else
    {
        printf("%d List : ", n);
        for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
        }

    F=1;
    R=n;
    printf("Front %d and Rear %d\n", F,R);
    }

    if(F==R)
    {
        F=0;
        R=0;
    }
    else if(F==max && a[i]!='\0')
    {
        F=1;
    }
    else
    {
        F++;
    }

    printf("After Delete : ");
    for(i=F; i<=R; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Front %d and Rear %d\n", F,R);
}
