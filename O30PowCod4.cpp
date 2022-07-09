#include<bits/stdc++.h>
using namespace std;

int escape(int j,int s,int n,vector<int>v)
{
    int jump=j;
    int slide=s;
    int jumps=0;
    
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        jump = j;
        while(jump<v[i])
        {
            jump+=jump-s;
            cnt++;
        }
        jumps+=cnt;
    }
    return jumps;
}

int main()
{
    int j,s,n;
    cin>>j>>s>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    int res=escape(j,s,n,v);
    cout<<res;
    return 0;
}
