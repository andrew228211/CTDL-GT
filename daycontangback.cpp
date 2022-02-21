#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
int n,k;
int m,cnt;
void sinh()
{
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	a[i]++;
	if(i>0)
	{
		for(int j=i+1;j<=n;j++)
		{
		a[j]=a[i]+j-i;
		}
	}
	else m=1;
}
void kt()
{
	int check=1;
	for(int i=1;i<=k;i++)
	{
		if(b[a[i-1]]>b[a[i]])
		{
			check=0;
			break;
		}
	}
	if(check==1) cnt++;
}
void xuat()
{
	for(int i=1;i<=k;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	m=0,cnt=0;
	while(m!=1)
	{
		kt();
		sinh();
		//xuat();
	}
	cout<<cnt;
}
