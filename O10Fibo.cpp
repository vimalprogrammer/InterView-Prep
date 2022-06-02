#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 


vector<int>fibo(int n)
{
    int fst=0,sec=1;
    vector<int>ser;

    ser.push_back(fst);
    ser.push_back(sec);
    int third=fst+sec;
    while(third<=n)
    {
        ser.push_back(third);
        fst=sec;
        sec=third;
        third=fst+sec;
    }
    if(third==1)
        ser.push_back(1);

    return ser;
}

int solve(vector<int>fibseries)
{
    int n=fibseries.size();
    int sum=0;
    for(auto it:fibseries)
    {
        if(it%2!=0)
            sum+=it;
    }
    return sum;
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastIO;
    int n;
    cin>>n;
    if(n<1)
    {
        cout<<n;
        return 0;
    }
    vector<int>fibseries=fibo(n);
    for(auto it:fibseries)
        cout<<it<<" ";
    int res=solve(fibseries);
    cout<<"\n"<<res;
    return 0;
}