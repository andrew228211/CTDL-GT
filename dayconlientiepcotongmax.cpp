#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Note: -2 -5 6 -2 -3 1 5 -6
	  -2 -2 1  4  1 2 7  1
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int f[1005];
		int Max=-1e6;
		f[0]=0;
		a[0]=0;
		for(int i=1;i<=n;i++)
		{
			f[i]=max(f[i-1]+a[i],a[i]+a[i-1]);
			Max=max(f[i],Max);
		}
		cout<<Max<<endl;
	}
}
