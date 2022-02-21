#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
void xuat(int x)
{
	cout<<"(";
	for(int i=1;i<=x-1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[x]<<")"<<" ";
}
void Try(int i,int sum,int k)
{
	for(int j=k;j>=1;j--)
	{
		if(sum+j<=n)
		{
			a[i]=j;
			sum+=j;
			if(sum==n) xuat(i);
			else Try(i+1,sum,j);
			sum-=j;
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
		Try(1,0,n);
		cout<<endl;
	}
}
