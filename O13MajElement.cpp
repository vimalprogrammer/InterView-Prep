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
