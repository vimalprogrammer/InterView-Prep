#include <bits/stdc++.h>
using namespace std;

// Input: viiimaal
// Output: i 3

int main()
{
    //cout<<"Hello World";
    
    string s;cin>>s;
    int let=-1,cnt=1;
    int maxi=0,n=s.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
                cnt++;
        }
        if(maxi<cnt)
        {
            let=i;
            maxi=cnt;
            cnt=1;
        }
    }
    cout<<s[let]<<" "<<maxi;
    return 0;
}