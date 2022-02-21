#include<bits/stdc++.h>
using namespace std;
int n,k,a[12][12],check[12];
vector<int>b(11);
vector<vector<int> >c;
void xuat()
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=a[i][b[i]];
	}
	if(sum==k)
	{
		c.push_back(b);
	}
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j]==0)
		{
			check[j]=1;
			b[i]=j;
			if(i==n) xuat();
			else Try(i+1);
			check[j]=0;
		}
	}
}
int main()
{
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	Try(1);
	cout<<k<<endl;
	for(int i=0;i<k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
