#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,stk=10,cstk=0,order1=0,order2=0,demand[100],cdemand=0,shortg=0,cshortg=0,d1,d2,dd1=0,dd2=0,d[100],k=1,avrgstk;
    int count,list1[100],list2[100],size=10,l,prob_lt[100],ltime[100];
    float astlk=0,serlv=0,d_p[100],t,l_p[100],sl,sl2,sl3;
    memset(list1,0,sizeof(list1));
    memset(list2,0,sizeof(list2));
    printf("Enter demand number:\n");
    for(i=1;i<=4;i++)
    {
        scanf("%d",&d[i]);
    }
    printf("Enter demand probability:\n");
    count=0;
    for(i=1;i<=4;i++)
    {
        scanf("%f",&d_p[i]);
        t=d_p[i]*20;
        if(t==floor(t))
        {
            list1[d[i]]=(int)t;
        }
        else
        {
            if(count%2==0)
            {
                list1[d[i]]=ceil(t);
            }
            else
            {
                list1[d[i]]=floor(t);
                count++;
            }
        }
    }
    i=1;
    while(i<=20)
    {
        l=rand()%size;
        if(list1[l]>0)
        {
            demand[i++]=l;
            list1[l]--;
        }
    }
    printf("Demand:");
    for(j=1;j<=20;j++)
    {
        printf("%d ",demand[j]);
    }
    printf("\n");
    printf("Enter lead number:\n");
    for(i=1;i<=3;i++)
    {
        scanf("%d",&prob_lt[i]);
    }
    printf("\nEnter lead probability:\n");
    count=0;
    for(i=1;i<=3;i++)
    {
        scanf("%f",&l_p[i]);
        t=l_p[i]*10;
        if(t==floor(t))
        {
             list2[prob_lt[i]]=(int)t;
        }
        else
        {
            if(count%2==0)
            {
                list2[prob_lt[i]]=ceil(t);
            }
            else
            {
                floor(t);
                count++;
            }
        }
    }
    i=1;
    while(i<=10)
    {
        l=rand()%size;
        if(list2[l]>0)
        {
            ltime[i++]=l;
            list2[l]--;
        }
    }
    printf("Lead Time:");
    for(j=1;j<=10;j++)
    {
        printf("%d ",ltime[j]);
    }
    printf("\n");
    printf("day    ");
    printf("stock   ");
    printf("cstock   ");
    printf("order1    ");
    printf("ddate1     ");
    printf("order2      ");
    printf("ddate12      ");
    printf("demand        ");
    printf("cdemand        ");
    printf("shortg          ");
    printf("cshortg          ");
    printf("\n");
    for(i=1;i<=20;i++)
    {
     printf(" %d     ",i);
     if(dd1==i)
     {
    stk=stk+15;
    order1=0;
     dd1=0;
     }
     if(dd2==i)
     {
           stk=stk+15;
           order2=0;
           dd2=0;
     }
     if( stk>=6 && stk<=10 && order1==0)
     {
     dd1=i+ltime[k];
     order1=15;
     k++;
     }
     if( stk>=0 && stk<=5 && order2==0)
     {
     dd2=i+ltime[k];
     order2=15;
     k++;
     }
     printf("%d       ",stk);
        cstk=cstk+stk;
     printf("%d        ",cstk);
     printf("%d         ",order1);
     printf("%d          ",dd1);
     printf("%d           ",order2);
     printf("%d            ",dd2);
     printf("%d             ",demand[i]);
     cdemand=cdemand+demand[i];
     printf("%d               ",cdemand);

     if(demand[i]<stk)
     {
     shortg=0;
     }
     else
     shortg= demand[i]-stk;
     printf("%d                     ",shortg);

     cshortg=cshortg+shortg;
     printf("%d",cshortg);


     if(stk>demand[i])
     stk=stk-demand[i];
     else
     stk=0;
     printf("\n");
}
printf("\n");
printf("total cdemand:");
printf(" %d\n",cdemand);
printf("total cshortg:");
printf("%d\n",cshortg);
printf("Avarage stock:");
avrgstk=cstk/20;
printf("%d\n",avrgstk);
sl=(cdemand-cshortg);
sl2=sl/cdemand;
sl3=sl2*100;
printf("Service level:");
printf("%.2f \n",sl3);

}

