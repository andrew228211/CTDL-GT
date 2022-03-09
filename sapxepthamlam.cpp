#include<bits/stdc++.h>
using namespace std;
int mode=1e9+7;
int n;
int a[100],b[100];
int kt()
{
	for(int i=0;i<n;i++)
		{
			if(b[i]!=a[i]&&a[n-i-1]!=b[i])
			{
				return 0;
			}
		}
		return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		if(kt()==1)
		{
		    cout<<"Yes";
		}
		else cout<<"No";
		cout<<endl;
	}
}
