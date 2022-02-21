#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int check[100];
int d;
void xuat()
{
	d=1;
	cout<<"[";
	int j=0;
	for(int i=n;i>=1;i--)
	{
		if(check[i]==1)
		{
			j=i;
			break;
		}
	}
	for(int i=1;i<j;i++)
	{
		if(check[i]==1)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<a[j]<<"] ";
}
void Try(int i,int sum)
{
	for(int j=i;j<=n;j++)
	{
			check[j]=1;
			sum+=a[j];
			if(sum==k) xuat();
			else Try(j+1,sum);
			sum-=a[j];
			check[j]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i],check[i]=0;
		d=0;
		sort(a+1,a+n+1);
		Try(1,0);
		if(d==0) cout<<-1;
		cout<<endl;
	}
}
