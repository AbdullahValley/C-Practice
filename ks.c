#include <stdio.h>
#include <math.h>
float dplus(float num[], int n);
float dminus(float num[], int n);
float largest(float data[], int n);

int i,j;

int main()
{
    printf("Kolmogorov Test\n");

    int n;

    //For input of numbers in array

    printf("Enter number of elements to compute for test: ");
    scanf("%d", &n);

    float num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
    }

    // sorting in ascending order

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                float temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("Numbers in ascending order are: \t");

    for (i = 0; i < n; i++)
    {
        printf("%0.2f\t", num[i]);
    }

    printf("\n");

    //for finding dp and dn

    float dp = dplus(num, n);
    float dn = dminus(num, n);
    printf("dp = %f\n", dp);
    printf("dn = %f\n", dn);

    //comparing for large value

    float dvalue = dn;

    if (dp > dn)
    {
        dvalue = dp;
    }

    printf("Calculated D = %0.2f\n", dvalue);


// For test kolmogorov

    float dalpha = 0.565;

    if (dalpha > dvalue)
    {
        printf("Since D is less than Dalpha, the data is uniformly distributed.\n");
    }
    else
    {
        printf("Since D is greater than Dalpha, the data is not uniformly distributed.\n");
    }

    return 0;
}

//For finding all value of dp

float dplus(float num[], int n)
{
    float data[n];

    for (i = 0; i < n; i++)
    {
        data[i] = (i + 1) / ((float) n) - num[i];
    }

    return largest(data, n);
}

//For finding all value of dn

float dminus(float num[], int n)
{
    float data[n];

    for (i = 0; i < n; i++)
    {
        data[i] = num[i] - i / ((float) n);
    }

    return largest(data, n);
}

//For finding all large value of dn and dp

float largest(float data[], int n)
{
    float large = data[0];

    for (i = 1; i < n; i++)
    {
        if (large < data[i])
            large = data[i];
    }


    return large;
}
