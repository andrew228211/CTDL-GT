#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int chuaxet[100];
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
int m=0;
void sinh()
{
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	a[i]++;
	if(i>0)
	{
		for(int j=1;j<=n;j++)
		{
			a[j]=a[i]+j-i;
		}
	}
	else m=1;
}
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		chuaxet[100]={0};
		for(int i=1;i<=n;i++) cin>>a[i];
		while(m!=1)
		{
			xuat();
			sinh();
		}
	}
}
