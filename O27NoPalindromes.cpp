#include <bits/stdc++.h>
using namespace std;

bool ispalin(string str)
{
    int s=0,e=str.size()-1;
    while(s<=e)
    {
        if(str[s++]!=str[e--])
            return false;
    }
    return true;
}


int main()
{
    string str;
    getline(cin,str);
    stringstream s(str); 
    string word;
    int cnt=0;
    while (s >> word)
    {
        if(ispalin(word))
            cnt++;
    }
    cout<<cnt;

}
