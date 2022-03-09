#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
		int res=0;
		for(int i=1;i<=n;i++)
		{
			f[i]=1;
			for(int j=1;j<i;j++)
			{
				if(a[i]>=a[j]&&f[j]+1>f[i])
				{
					f[i]=f[j]+1;
				}
			}
			res=max(res,f[i]);
		}
		cout<<n-res<<endl;
	}
}
