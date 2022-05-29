#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int solve(vector<int>v1,vector<int>v2)
{
    int m=v1.size();
    int n=v2.size();
    
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    
    for(int i=m+1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(v1[i]==v2[j])
                dp[j][i]=dp[j+1][i+1]+1;
        }
    }
    int maxm=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            maxm=max(maxm,dp[i][j]);
        }
    }
    return maxm;
}


int main()
{
    fastIO;
    
    vector<int>v1={6,5,7,3,7};
    vector<int>v2={5,7,3,7,2};
    //Output : 4
    int res=solve(v1,v2);
    cout<<res;
    return 0;
}