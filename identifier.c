#include<stdio.h>
int main()
{
    char input[49];

    int i, flag, counter=0;

    printf("Please Enter String : \n\n");

    gets(input);


    if ( (input[0]>='a' && input[0]<='z') || (input[0]>='A' && input[0]<='Z') || (input[0]=='_') )
        {
            for(i=1; i<=strlen(input); i++)
            {
                if((input[i]>='a' && input[i]<='z') || (input[i]>='A' && input[i]<='Z') || (input[i]>='0' && input[i]<='9') || (input[i]=='_') )
                    {
                        counter++;
                    }

                if( (input[i]=='#') || (input[i]=='$') || (input[i]=='%') || (input[i]=='^') || (input[i]=='&') )
                {
                    flag = 1;
                    break;
                }
            }

            if(counter==strlen(input))
                {
                    flag=0;
                }
        }

    else{
        flag = 1;
        }

        if(flag == 1)
         printf("\nThis is NOT valid Identifier or Variable\n");

        else
         printf("\nThis is valid Identifier or Variable\n");

     return 0;
}
