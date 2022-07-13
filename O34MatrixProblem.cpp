#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fastIO;
    int r,c;
    cin>>r>>c;
    vector<vector<int>>v2;
    vector<vector<int>>mat;    
    for(int i=0;i<r;i++)
    {
        vector<int>v;
        for(int j=0;j<c;j++)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        mat.push_back(v);
    }


    // for(int i=0;i<r;i++)
    // {
    //     vector<int>v;
    //     for(int j=0;j<c;j++)
    //         v.push_back(0);
    //     v2.push_back(v);
    // }

    // int k=1;
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         if(i==j)
    //             v2[i][j]=k++;
    //     }
    // }

    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         cout<<v2[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<"\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if((i!=j) && (mat[i][j]!=0))
            {
                cout<<"False";
                return 0;
            }
        }
    }
    cout<<"True";
    return 0;
}