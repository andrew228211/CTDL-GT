#include<bits/stdc++.h>
using namespace std;
int mode=1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long x=0;
		for(int i=0;i<n;i++)
		{
			long long y=(a[i]*i)%mode;
			x=(x+y)%mode;
		}
		cout<<x<<endl;
	}
}
