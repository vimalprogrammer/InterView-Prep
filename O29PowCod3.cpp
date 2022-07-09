#include<bits/stdc++.h>
using namespace std;

int equalizeAmt(vector<int>v)
{
    int sum=0;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    int avg=sum/n;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>avg)
            res+=(v[i]-avg);
    }
    return res;
}


int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    int res=equalizeAmt(v);
    cout<<res;
    return 0;
}
