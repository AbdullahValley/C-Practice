#include<stdio.h>

void main()
{
    int a[5]={8,5,4,9,6}, i, n, min;

    //printf("Enter Array Size (1-10) : ");
    //scanf("%d", &n);

    //printf("Input %d Array Number's : ", n);
    //for(i=1; i<=n; i++)
    //{
     //   scanf("%d", &a[i]);
    //}

    printf("Series is : ");
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    min = a[0];
    int pos = 1;

    for(i=0; i<5; i++)
    {
        if(a[i]<=min)
        {
            min = a[i];
            pos = i;
        }
    }

printf("\nMin is : %d and Position is a[%d]\n\n", min, pos);

    int temp = a[0];
    a[0] = min;
    a[pos] = temp;




    printf("After SWAP Series is  : ");
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


}
}
