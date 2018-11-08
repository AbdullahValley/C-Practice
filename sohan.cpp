#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,small_num = 10001,largest_num = 0, k , max_dubli_value = 0,val = 0 ;
  cin >> n;
  int ar[10001];
  memset(ar,0,sizeof(ar));
  for(int i = 0; i < n ; i++)
             {
               cin >> k;
               ar[k]++;
               small_num = min(small_num,k);
               largest_num = max(largest_num,k);
               cout << ar[k] << endl;
               if(ar[k] > max_dubli_value) {
                 max_dubli_value = ar[k];
                 val = k;
               }
             }
  cout << "Small Number = " << small_num << endl << "Largest Number = " << largest_num << endl << "Maximum Repite Number = " << val << endl;
  return 0;
}
