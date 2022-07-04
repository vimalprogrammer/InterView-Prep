#include <bits/stdc++.h>
using namespace std;

//Input : 34 32 33 35 31
// Output : 1 --> we will arrange in order by 31 32 33 34 35

int main()
{
    //printf("Hello World");
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(!(v[i+1]==v[i]+1))
        {
            cout<<"0";
            return 0;
        }
    }
    cout<<"1";
    return 0;
}