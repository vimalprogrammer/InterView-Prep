#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

void solve(vector<vector<int>>v2,int t,int n)
{
    int rs=0,re=t-1,cs=0,ce=t-1;
    while(rs<=re && cs<=ce)
    {
        for(int i=rs;i<=re;i++)
            v2[rs][i]=t;
        rs++;

        for(int i=rs;i<=ce;i++)
            v2[i][ce]=t;
        ce--;

        for(int i=ce;i>=cs;i--)
            v2[re][i]=t;
        re--;

        for(int i=ce;i>=rs;i--)
            v2[i][cs]=t;
        cs++;

        t--;
    }


    for(auto it:v2)
    {
        for(auto i:it)
            cout<<i<<" ";
        cout<<"\n";
    }
}


int main()
{

    fastIO;
    int n;
    cin>>n;
    int t=n+(n-1);
    vector<vector<int>>v2;
    for(int i=0;i<t;i++)
    {
        vector<int>v;
        for(int j=0;j<t;j++)
            v.push_back(0);
        v2.push_back(v);
    }
    // for(auto it:v2)
    // {
    //     for(auto i:it)
    //         cout<<i<<" ";
    //     cout<<"\n";
    // }
    solve(v2,t,n);
    return 0;
}