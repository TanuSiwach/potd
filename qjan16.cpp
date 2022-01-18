#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%21==0)
		{
			cout<<"The streak is broken!"<<endl;
			continue;
		}
		while(n>0)
		{
			if(n%100==21)
			{
				cout<<"The streak is broken!"<<endl;
				break;
			}
			n/=10;
		}
		if(n==0)
		cout<<"The streak lives still in our heart!"<<endl;
	}
	return 0;
}