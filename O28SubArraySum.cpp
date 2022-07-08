#include <bits/stdc++.h>
using namespace std;

//Sub array sum equal

pair<int,int>solve(vector<int>v,int sum)
{
    int res=sum;
    int n=v.size();
    int cur_sum=v[0];
    int start=0;
    for(int i=1;i<=n;i++)
    {
        while(cur_sum>sum && start<i-1)
            cur_sum-=v[start++];
            
        if(sum==cur_sum)
            return {start,i-1};
            
        if(i<n)
            cur_sum+=v[i];
    }
    return {-1,-1};
}


int main()
{
    vector<int>v={1,3,3,4,6,7,8};
    pair<int,int>p=solve(v,0);
    cout<<p.first<<" "<<p.second;
    return 0;
}
