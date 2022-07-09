#include<bits/stdc++.h>
using namespace std;

bool isformal(vector<int>v,int num,int n)
{
    int i=0;
    while(i<n)
    {
        if(num%v[i]==0)
            num/=v[i];
        else
            i++;
    }
    if(num==1)
        return true;
    else return false;
}

int main()
{
   // cout<<"Hello World";

    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    int val;cin>>val;
    int cnt=0,num=2;
    while(cnt<n)
    {
        if(isformal(v,num,n))
            cnt++;
        num++;
    }
    cout<<num;
    return 0;
}
