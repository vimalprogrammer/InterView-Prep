/*
Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Output: Sum found between indexes 2 and 4
Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33

Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Output: Sum found between indexes 1 and 4
Sum of elements between indices 1 and 4 is 4 + 0 + 0 + 3 = 7

Input: arr[] = {1, 4}, sum = 0
Output: No subarray found
There is no subarray with 0 sum
*/

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

vector<int> subarrwithSum(vector<int>v,int sum)
{
    int n=v.size();
    int start=0,cur_sum=v[0];
    for(int i=1;i<n;i++)
    {
        if(cur_sum>sum && start<i-1)//1, 4, 20, 3, 10, 5      33
        {
            cur_sum-=v[start];
            start++;//for starting point
        }
        if(cur_sum==sum)
            return {start,i-1};
        if(cur_sum<sum)
            cur_sum+=v[i];
    }
    return{-1,-1};
}

int main()
{
    fastIO;
    vector<int>v1={15, 2, 4, 8, 9, 5, 10, 23};
    int sum=23;
    vector<int>res=subarrwithSum(v1,sum);
    for(auto it:res)
        cout<<it<<" ";
    return 0;
}

