#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int check[100];
vector<int>b(100);
int kt()
{
	if(a[1]!=8||a[n]!=6)
	{
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i+1]&&a[i]==8)
		{
			return 0;
		}
	}
	int cnt=0;
	int Max=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i+1]&&a[i]==6)
		{
			cnt++;
		}
		else{
			cnt=0;
		}
		if(cnt>=3)
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
	}	cout<<endl;
	}
}
void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		if(j==0) a[i]=6;
		else a[i]=8;
		if(i==n) xuat();
		else{
			Try(i+1);
		}
	}
}
int main()
{
	cin>>n;
	Try(1);
}
