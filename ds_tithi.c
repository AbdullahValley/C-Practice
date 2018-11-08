#include<stdio.h>
void main()
{
    int a[10],i,n,top,max,item,q;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    top=n;
    while(q!=3)
    {
        max=10;
        if(q==1)
        {



            printf("enter the inserting item:\n");
            scanf("%d",&item);
            if(top>=max)
            {
                printf("overflow and insertion not possible");
                return 0;
            }
            else
                {
                    top++;
                    a[top]=item;
                }


        }
        if(q==2)
        {
          if(top==0)
        {
            printf("underflow and deletion not possible");
            return 0;
        }
        top=top-1;

        }
        printf("the array is:");
        for(i=1;i<=top;i++)
        {
            printf(" %d ",a[i]);
        }

        printf("\nchoose an option \n 1.push\n 2.pop\n 3.exit \n");
        scanf("%d",&q);
    }
}
