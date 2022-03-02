#include<bits/stdc++.h>
using namespace std;
int n,k;
string s,ans;
int cnt=0;
int b[100],a[100],check[100],x[100];
int kt()
{
	int tmp;
	if(x[1]==1) tmp=a[b[1]]+a[b[2]];
	if(x[1]==2) tmp=a[b[1]]-a[b[2]];
	if(x[1]==3) tmp=a[b[1]]*a[b[2]];
	for(int i=3;i<=5;i++)
	{
		if(x[i-1]==1) tmp+=a[b[i]];
		if(x[i-1]==2) tmp-=a[b[i]];
		if(x[i-1]==3) tmp*=a[b[i]];
	}
	if(tmp==23)
	{
		return 1;
	}
	return 0;
}
void xuat(int i)
{
	for(int j=1;j<=3;j++)
	{
		x[i]=j;
		if(i==4){
			if(kt()==1)
			{
				cnt=1;
				return;
			}
		}
		else xuat(i+1);
	}
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j]==0)
		{
			b[i]=j;
			check[j]=1;
			if(i==n) xuat(1);
			else Try(i+1);
			check[j]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		n=5;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		check[100]={0};
		cnt=0;
		Try(1);
		if(cnt==1)
		{
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}
}
