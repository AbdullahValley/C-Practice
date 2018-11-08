#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("\t\t\t\t");
        for(j=0;j<n;j++){
            if(i==0){
                printf("* ");
            }else if(i!=0 && j==(n/2)+1){
                printf("  *");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }}
