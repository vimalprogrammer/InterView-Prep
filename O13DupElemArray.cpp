#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=0; j<i; j++)
            if(arr[i] == arr[j])
               break;
  
        if(i == j)
            cout<<arr[i]<<" ";
    }
}

int main()
{
	int arr[] = {6, 5, 5, 10, 5, 4, 9, 120, 4, 6, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printDistinct(arr, n);
	return 0;
}


//-----------Distinct Elements in an array------------//

#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int flag=1;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j] && i!=j)
            {
                flag=0;
                break;
            }
        }
        
        if(flag)
            cout<<arr[i]<<" ";
    }
}

int main()
{
	int arr[] = {6, 5, 5, 10, 5, 4, 9, 120, 4, 6, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	printDistinct(arr, n);
	return 0;
}
