#include<bits/stdc++.h>
using namespace std;
int n;
int a[11],b[11],chuaxet[11]={0};
int m;
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[b[i]]<<" ";
	}
	cout<<endl;
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(chuaxet[j]==0)
		{
			b[i]=j;
			chuaxet[j]=1;
			if(i==n) xuat();
			else Try(i+1);
			chuaxet[j]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	Try(1);
}
