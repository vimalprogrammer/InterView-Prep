#include<bits/stdc++.h>
using namespace std;

    
int lengthOfLongestSubstring(string s) 
{
    int n=s.size();
    unordered_map<char,int>mp;
    int newStart=0,longnonRep=0;
    for(int i=0;i<n;i++)
    {
        if(mp.count(s[i])!=0)
            newStart=max(newStart,mp[s[i]]+1);
        mp[s[i]]=i;
        
        longnonRep=max(longnonRep,i-newStart+1);
    }
    return longnonRep;
}

int main()
{
    int res=lengthOfLongestSubstring("vimalvarshu");//Output = 7 --> lvarshu
    cout<<res;
}
