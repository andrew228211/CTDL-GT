#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int a[100];
int chuaxet[100];
void xuat()
{
	for(int i=1;i<=n;i++)
	{
		cout<<s[a[i]-1];
	}
	cout<<" ";
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
		cin>>s;
		n=s.size();
	//	cin>>n;
		chuaxet[100]={0};
		Try(1);
		cout<<endl;
	}
}
