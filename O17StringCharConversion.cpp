#include<bits/stdc++.h>
using namespace std;

// char* solveStr(char* cStr)
// {
//     string s(cStr);
//     string res="";
//     for(char i:s)
//     {
//         if(!(isalpha(i)))
//             continue;
//         res+=i;
//     }
//     int n=res.size();
//     char char_arr[n + 1];
//     strcpy(char_arr, res.c_str());
    
//     return char_arr;
// }


int main()
{
    char *cStr = "C++vimal";
    // string s = string(cStr);
    // for(char i:s)
    //     cout<<i<<" ";
    // string s(cStr);
    // for(char i:s)
    //     cout<<i<<" ";
        
    // char *res=solveStr(cStr);
    string s(cStr);
    string res="";
    for(char i:s)
    {
        if(!(isalpha(i)))
            continue;
        res+=i;
    }
    int n=res.size();
    char char_arr[n + 1];
    strcpy(char_arr, res.c_str());
    
    cout<<char_arr<<"\n";
    // cout<<res<<" ";
    cout<<657<<endl;
    // for(int i=0;i<strlen(res);i++)
    //     cout<<res[i]<<" ";
        
    return 0;
}
