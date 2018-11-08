#include<stdio.h>
void main()
{
    int d1,d2,d3,a1,a2,a3,a4;
    scanf("%d %d %d", &d1,&d2,&d3);

    a1 = d1+d1+d2+d2;
    a2 = d2+d2+d3+d3;
    a3 = d1+d3+d3+d1;
    a4 = d1+d2+d3;
    if(a1<a2 && a1<a3 && a1<a4){
        printf("%d\n",a1);
    }
    else if(a2<a1 && a2<a3 && a2<a4){
        printf("%d\n",a2);
    }
     else if(a3<a1 && a3<a2 && a3<a4){
        printf("%d\n",a3);
    }
    else{
        printf("%d\n",a4);
    }
}
