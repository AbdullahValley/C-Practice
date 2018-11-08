#include<stdio.h>

void main()
{
    int S[6] = {1,2,4,3,7,8};
    int F[6] = {3,4,6,7,9,10};

    int Selected = 0, i;

    printf("Selected Lecture = %d\n", Selected+1);

    for(i=1; i<6; i++)
    {
        if(S[i] >= F[Selected])
        {
            Selected = i;

            printf("Selected Values = %d\n", Selected+1);
        }
    }



}
