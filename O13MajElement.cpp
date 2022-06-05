/*Problem Description

Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.

Example :

Input : [2, 1, 2]
Return  : 2 which occurs 2 times which is greater than 3/2.
*/

int Solution::majorityElement(const vector<int> &A) {
    //Moore's algorithm
    int mj=0,cnt=1;
    int n=A.size();
    for(int i=1;i<n;i++)
    {
        if(A[mj]==A[i])
            cnt++;
        else
            cnt--;
        
        if(cnt==0)
        {
            mj=i;
            cnt=1;
        }
    }
    return A[mj];
}
