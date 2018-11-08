#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("\t\t\t\t");
        for(j=0;j<n;j++){
            if(i==0 || i== n-1 || i == (n/2)){
                printf("* ");
            }else if(j==0){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
