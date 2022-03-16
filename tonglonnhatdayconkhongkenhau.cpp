#include<bits/stdc++.h>
using namespace std;
/*
3 4 5 3 2  5
3 4 8 8 10 13
*/
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		int f[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		f[0]=a[0];
		f[1]=max(a[0],a[1]);
		for(int i=2;i<n;i++)
		{
			f[i]=max(f[i-2]+a[i],f[i-1]);
		}
		cout<<f[n-1]<<endl;
	}
}
