#include <bits/stdc++.h>
using namespace std;

bool palin(int n)
{
    int t=n;
    int rev=0;
    while(t)
    {
        int r=t%10;
        rev=rev*10+r;
        t/=10;
    }
    if(n==rev)
        return true;
    return false;
}

int main()
{
    int n;cin>>n;
    while(true)
    {
        if(palin(n))
        {
            cout<<n;
            return 0;
        }
        n++;
    }
    return 0;
}
