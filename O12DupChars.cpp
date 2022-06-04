// #include <bits/stdc++.h>
// using namespace std;
// #define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

// int main() {
    
    //---------------PRINT DUPLICATE LETTERS--------------

    // string s;cin>>s;
    // int n=s.size();
    
    // int a[26]={0};
    
    // for(char i:s)
    //     a[i-'a']++;
    
    // for(auto i:a)
    //     cout<<i<<" ";
    
    // cout<<"\n";
    
    // string dum="";
    
    // for(int i=0;i<26;i++)
    // {
    //     if(a[i]>=1)//a[i]>1 for only duplicate values;
    //         dum+=char(i+'a');
    // }
    
    // cout<<dum;
    // //cout<<char(0+'a'); //-->a
    
    //-------------COMMON CHAR IN TWO STRINGS--------------
    
    // C++ program to print common characters
// of two Strings in alphabetical order


#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1 = "vimalv";
	string s2 = "varshuv";
	
	int a1[26] = {0};
	int a2[26] = {0};

// 	for(int i = 0 ; i < s1.length() ; i++)
// 		a1[(int)s1[i] - k]++;

    for(char i:s1)
        a1[i-'a']++;
		
// 	for(int i = 0 ; i < s2.length() ; i++)
// 		a2[(int)s2[i] - k]++;

    for(char i:s2)
        a2[i-'a']++;

	for(int i = 0 ; i < 26 ; i++)
	{
		if (a1[i] != 0 and a2[i] != 0)
		{
            if(a1[i]>=1)//a[i]>1 for only duplicate values;
                cout<<char(i+'a')<<" ";     
		}
	}
    return 0;
}