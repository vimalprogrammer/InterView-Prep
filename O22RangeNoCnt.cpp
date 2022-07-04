#include <bits/stdc++.h>
using namespace std;

// Input: 2 20
// Output: 3 --> 2 12 20 totally 3 two's

int main()
{
    //printf("Hello World");
    int a,b;
    cin>>a>>b;
    
    int t=a;
    int cnt=0;
    
    for(int i=a;i<=b;i++)
    {
        int temp=i;
        while(temp!=0)
        {
            if(temp==t || temp%10==t)
                cnt++;
            temp/=10;
        }
    }
    cout<<cnt;
    return 0;
}