//Input : 3
//        1 2 4
//        level = 3

//Output : 22 // sum of all factors upto level 3

#include <bits/stdc++.h>
using namespace std;

int sum=0;

int sumPrmefactor(vector<int>v,int l)
{
    int t=sum;
    sum=0;
    if(l==0)
        return t;
    vector<int>res;
    for(int i=0;i<v.size();i++)
    {
        for(int j=1;j<=v[i];j++)
        {
            if(v[i]%j==0)
            {
                res.push_back(j);  
                sum+=j;
            }
        }
    }
  return sumPrmefactor(res,l-1);                                                                                                                                                                                                                                                                                                                  
}



int main()
{
    int n;cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
        int level;cin>>level;
    int res=sumPrmefactor(v,level);
    cout<<res;
    
}