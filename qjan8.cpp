#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,countd=0,countu=0;
        cin>>n>>m;
        int arr[n];
        int mod[m]={0};
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
            mod[arr[i]%m]++;
        for(int i=0;i<m;i++)
        {
            if(mod[i])
                countd++;
            if(mod[i]==1)
                countu++;
        }
        cout<<countd<<endl;
        cout<<countu<<endl;
    }
    return 0;
}
