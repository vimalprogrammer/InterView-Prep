#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int maxSubArraySum(int arr[],int size)
{
    int max_so_far=INT_MIN;
    int max_end_far=0;
    
    for(int i=0;i<size;i++)
    {
        max_end_far+=arr[i];
        if(max_so_far<max_end_far)
            max_so_far=max_end_far;
            
        if(max_end_far<0)
            max_end_far=0;
    }
    return max_so_far;
}


int main()
{
    fastIO;
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
