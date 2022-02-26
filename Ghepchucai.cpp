#include<bits/stdc++.h>
using namespace std;
int n;
char a[1005];
int m;
int chuaxet[1005]={0};
int kt()
{
	for(int i=2;i<=n-1;i++)
	{
		if((a[i]=='A'||a[i]=='E')&&(a[i-1]!='A'&&a[i-1]!='E')&&(a[i+1]!='A'&&a[i+1]!='E')){
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
		a[i]=j+64;
		chuaxet[j]=1;
		if(i==n) xuat();
		else Try(i+1);
		chuaxet[j]=0;
		}
	}
}
int main()
{
		char h;
		cin>>h;
		n=h-'A'+1;
		Try(1);
}
