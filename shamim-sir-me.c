#include<stdio.h>
void main()
{
    int i;
    for(i=2; i<=190;)
    {
        printf("%d ", i);
    if(i>=70 && i<190)
            i=i+30;
        else if(i>=30 && i<70)
            i=i+10;
        else if(i>=10 && i<30)
            i=i+5;
        else
        {
            i=i+2;
        }
    }
}
