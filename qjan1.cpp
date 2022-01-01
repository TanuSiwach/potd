#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,d;
	    cin>>n>>d;
	    int arr[n];
	    int temp[d];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<d;i++)
	    temp[i]=arr[i];
	    for(int i=0;i<n-d;i++)
	    arr[i]=arr[i+d];
	    for(int i=n-d,j=0;i<n;i++,j++)
	    arr[i]=temp[j];
	    for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}