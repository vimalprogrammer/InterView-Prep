#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int main() {

    //getting user input without having size
    string input1,input2;
    getline( cin, input1 );
    getline( cin, input2 );
    istringstream is1( input1 );
    istringstream is2( input2 );
    vector<int> v1( ( istream_iterator<int>( is1 ) ), istream_iterator<int>() );
    vector<int> v2( ( istream_iterator<int>( is2 ) ), istream_iterator<int>() );
    
    for(auto it:v1)
        cout<<it<<" ";
    cout<<"\n";
    for(auto it:v2)
        cout<<it<<" ";

    return 0;
}