#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,q;
		cin>>p>>q;
		int a[p],b[q];
		int x[p+q];
		memset(x,0,sizeof(x));
		for(int i=0;i<p;i++) cin>>a[i];
		for(int j=0;j<q;j++) cin>>b[j];
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
			{
				x[i+j]+=a[i]*b[j];
			}
		}
		for(int i=0;i<p+q-1;i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<endl;
	}
}
