#include<stdio.h>

void merge_sort(int A[], int p, int r)
{
    if(p < r)
    {
        int q = (p+r)/2;
        merge_sort(A, p, q);
        merge_sort(A, q+1, r);
        merge(A, p, q, r);
    }
}

void merge(int A[], int p, int q, int r)
{
    int B[8];
    int i, j, k;

    i = k = p;
    j = q+1;

    while(i<=q && j<=r)
    {
        if(A[i] <= A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }

    }

    // Copy Remaining Elements

    while(i <= q)
    {
        B[k++] = A[i++];
    }

    while(j <= r)
    {
        B[k++] = A[j++];
    }

    // Copy back to A

  for(i=p; i<=r; i++)
  {
        A[i] = B[i];
  }
}

void main()
{
    int i;
    int A[8] = {7, 3, 2, 9, 8, 6, 10, 5};
    merge_sort(A, 0, 7);

    for(i = 0; i < 8; i++)
    {
        printf("%d ", A[i]);
    }
}
