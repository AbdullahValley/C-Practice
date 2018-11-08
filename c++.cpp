#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    deque<int>v_name;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v_name.push_back(k);

    }

    for(int i=0;i<m;i++)
    {
        v_name.push_back(v_name.front());
        v_name.pop_front();

    }
    while(!v_name.empty())
    {

        cout<<v_name.front()<<" " <<endl;
        v_name.pop_front();
    }

return 0;
}
