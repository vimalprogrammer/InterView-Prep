#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    string s;
    getline(cin,s);
    int n=s.size();
    int num=0,consonant=0,vowel=0,space=0,special=0;
    for(int i=0;i<n;i++)
    {
        if((int)s[i]>48 && (int)s[i]<57)
            num++;
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            vowel++;
        else if((int)s[i]==32)
            space++;
        else if(isalpha(s[i]) && !(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
            consonant++;
        else
            special++;
            
    }
    cout<<num<<" "<<vowel<<" "<<consonant<<" "<<space<<" "<<special;
    return 0;
}