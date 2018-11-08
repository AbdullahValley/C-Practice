#include<stdio.h>
void main()
{
    int a[5], i, n, max=5, item, F, R;

    printf("Enter Limit : ");
    scanf("%d", &n);

    if(n==0)
    {
        F='\0';
        R='\0';

    printf("Initially Front = %d and Rear = %d\n", F,R);
    }

    else
    {
        printf("%d List Enter : ", n);
        for(i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
        }

    F = 1;
    R = n;
    printf("Initially Front = %d and Rear = %d\n", F,R);
    }

    printf("Enter item for insert : ");
    scanf("%d", &item);

    if(F==1 && R>=max)
                    {
                        printf("Over FLOW !");
                        return 0;
                    }

    else {

                        if (F=='\0' && R=='\0')
                        {
                            F=1;
                            R=1;
                        }


                    else if (R==max && a[1]=='\0')
                    {
                        R = 1;
                    }

                    else
                    {
                        R++;
                    }
                }
    a[R]= item;
printf("Finally Front = %d and Rear = %d\n", F,R);
    printf("After that our series is : ");
    for(i=F; i<=R; i++)
    {
        printf("%d ", a[i]);
    }
}
