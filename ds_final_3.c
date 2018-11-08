#include<stdio.h>

void main()
{
    int a[10], i, n, k, j, p, x, item, temp;

    printf("Enter Limit : ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("\nYour Heap is EMPTY.\n");
        return 0;
    }

    else
    {
        printf("\nPlease Enter %d Values : ", n);
        for(k=1; k<=n; k++)
        {
            scanf("%d", &a[k]);
        }
    }

    printf("\nEnter the Position : ");
    scanf("%d", &p);

    x = a[p];
    a[p] = a[n];
    i = p;
    j = 2*i;
    item = a[i];

    while(j<=n)
    {
        if((j<n) && (a[j] < a[j+1]))
        {
            j++;
        }

        if(item<=a[j])
        {
            a[j] = a[(j/2)];
            j = 2*j;
        }

        else
        {
            goto read;
        }
    }

    read: a[(j/2)] = item;

    printf("\nAfter Delete : ");
    for(k=1; k<=n-1; k++)
    {
        printf("%d ", a[k]);
    }

    printf("\n");

}
