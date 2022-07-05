#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        string str="";
        char x=s[i++];
        int digit=0;
        while(s[i]>=48 && s[i]<=57)
        {
            digit=10*digit+s[i]-'0';
            i++;
        }
        i--;
        while(digit--)
        {
            cout<<x;
        }
    }
    return 0;
}
