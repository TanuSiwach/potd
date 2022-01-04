#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else
    gcd(b%a,a);
}
int gcdarr(int arr[],int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        res=gcd(arr[i],res);
        if(res==1)
        return 1;
    }
    return res;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<gcdarr(arr,n);
	    cout<<endl;
	}
	return 0;
}