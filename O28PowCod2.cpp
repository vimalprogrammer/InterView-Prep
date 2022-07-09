#include<bits/stdc++.h>
using namespace std;

void rev(string s)
{
    stringstream str(s);
    
    stringstream str2(s);
    string word;
    
    int cnt=0;
    
    while(str2>>word)
    {
        cnt++;
    }
    while(str>>word)
    {
        cnt--;
        for(int i=word.size()-1;i>=0;i--)
            cout<<word[i];
        if(cnt!=0)
            cout<<" ";
    }
}

int main()
{
    string s;getline(cin,s);
    rev(s);
    //cout<<"varshu";
    return 0;
}
//stream <<n;
//string s
//stream>>s
