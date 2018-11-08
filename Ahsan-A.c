#include<stdio.h>

int main()
{
    int i,j,n,sp=10,k;

    scanf("%d",&n);
    k = (n/2);
      for(i=0; i<n; i++){
            printf("\t\t\t\t");

        for(j=0; j<n; j++){
       if((i==0 && j== k) || (i==k/2 && j==k)){
           printf("*");
       }else if(i!=0 && (j == k+i || j== k-i)){
           printf("*");
       }else{
           printf(" ");
       }

       }
        printf("\n");
    }
    return 0;
}
