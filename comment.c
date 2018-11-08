#include<stdio.h>

int main()
 {
    char a[49];
    int i=2, j=0;

    printf("Please Enter Line:\n");
    gets(a);

    if(a[0]=='/')
    {
        if(a[1]=='/')
        printf("YES, It is a comment.\n");

        else if(a[1]=='*')
            {
                for(i=2;i<=100;i++)
                    {
                        if(a[i]=='*' && a[i+1]=='/')
                            {
                                printf("YES, It is a comment.\n");
                                j=1;
                                break;
                            }
                        else
                        continue;
                    }
                    if(j==0)
                    printf("It is NOT a comment.\n");
            }
            else
            printf("It is NOT a comment\n");
      }
  else
  printf("It is NOT a comment\n");

 return 0;
 }
