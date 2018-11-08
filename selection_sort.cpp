#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, a[10], smallest, pos, temp;
    cout<<"Enter the Array Size : ";cin>>n;
    cout<<"Enter Array Values : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
    smallest = a[i];
    pos = i;

        for(j=i+1; j<n; j++)
        {
            if ( a[pos] > a[j] )
                pos = j;

            if ( pos != i )
            {
             temp = a[i];
             a[i] = a[pos];
             a[pos] = temp;
            }
        }
    }

    cout<<endl;

    cout<<"After Sort The Series is : ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}

