#include<stdio.h>

int main()
{
    int a[20], i, z, n, p=0;

    printf("Please Give Limit : ");
    scanf("%d", &n);

    printf("Please Input %d array elements: ",n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Please Input Value for search: ");
    scanf("%d", &z);

    for(i=1; i<=n; i++)
    {
        if(a[i] == z)
            break;
    }



    if(i<=n)
    {
       printf("\nYes ! SUCEESS Position is : %d \n\n", i);


    p=i;


   for (i=p; i<=n-1; i++)
        {
            a[i] = a[i+1];
        }

      printf("After Delete, Array is: ");

      for(i=1; i<=n-1; i++)
    {
        printf("%d ", a[i]);
    }


    }

    else
    {
        printf("\nSORRY ! FAILED to FIND \n");
    }


    printf("\n\n");

    return 0;

}
