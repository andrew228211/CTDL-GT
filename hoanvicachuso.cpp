#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<string>s(11);
int check[100],a[100];
int cnt=0,Min=1e9;
int b[100];
void xuat()
{
	string x="";
	int m;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			x+=s[i][a[j]-1];	
		}
		m=atoi(x.c_str());
		b[i]=m;
		x.clear();
	}

	sort(b+1,b+n+1);
	Min=min(Min,b[n]-b[1]);
}
void Try(int i)
{
	for(int j=1;j<=k;j++)
	{
		if(check[j]==0)
		{
			a[i]=j;
			check[j]=1;
			if(i==k) xuat();
			else Try(i+1);
			check[j]=0;
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	Try(1);
	cout<<Min;
}
