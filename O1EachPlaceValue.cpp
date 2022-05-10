//Skillrack asked question 
//Input : -5467
//Output : -5000 -400 -60 -7

#include<bits/stdc++.h>
using namespace std;

int placeValue(int N, int num)
{
    int target=1,rem;
    while(true)
    {
        rem=N%10;
        N/=10;
        if(rem==num)
        {
            target*=num;
            break;
        }
        target*=10;
    }
    return target;
}

int main()
{
	int N = -5984;
	int t=N;
	vector<int>v;
	while(t)
	{
    	v.push_back(placeValue(N, t%10));
    	t/=10;
	}
	reverse(v.begin(),v.end());
	for(auto it:v)
	{
	    cout<<it<<" ";
	}
}
