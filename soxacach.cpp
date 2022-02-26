#include<bits/stdc++.h>
using namespace std;
int n;
int a[11],chuaxet[11];
int kt()
{
	for(int i=1;i<=n-1;i++)
	{
		if(abs(a[i]-a[i+1])==1)
		{
			return 0;
		}
	}
	return 1;
}
void xuat()
{
	if(kt())
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(chuaxet[j]==0)
		{
			chuaxet[j]=1;
			a[i]=j;
			if(i==n) xuat();
			else Try(i+1);
			chuaxet[j]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		chuaxet[11]={0};
		Try(1);
	}
}
