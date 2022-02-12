#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		long long a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int d=0;
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				long long x=a[i]+a[j];
				if(binary_search(a+j+1,a+n,m-x))
				{
					cout<<"YES";
					d=1;
					break;
				}
			}
			if(d==1) break;
		}
		if(d==0) cout<<"NO";
		cout<<endl;
	}
}

