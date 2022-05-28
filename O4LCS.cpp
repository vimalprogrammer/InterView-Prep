#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 


int LCS(string s,string t,int m,int n,vector<vector<int>>&memo)
{
    if(memo[m][n]!=-1)
        return memo[m][n];
    
    if(m==0 || n==0)
        return 0;//memo[m][n]=0;
    
    if(s[m-1]==t[n-1])
        memo[m][n]=1+LCS(s,t,m-1,n,memo);
    else
        memo[m][n]=max(LCS(s,t,m-1,n,memo),LCS(s,t,m,n-1,memo));
    
    return memo[m][n];
}


int main()
{
    fastIO;
    string s="ABCDFGH";
    string t="HACDGKO";
    int m=s.size();
    int n=t.size();
    vector<vector<int>>memo(m+1,vector<int>(n+1,-1));
    int res=LCS(s,t,m,n,memo);
    cout<<res;
    return 0;
}