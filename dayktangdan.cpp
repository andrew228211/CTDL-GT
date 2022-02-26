#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100],b[100];
int ok;
void sinh()
{
	int i=k;
	while(i>0&&b[i]==n-k+i) i--;
	b[i]++;
	if(i>0)
	{
		for(int j=i+1;j<=n;j++)
		{
			b[j]=b[i]+j-i;
		}
	}
	else ok=0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++)
		{
			b[i]=i;
		}
		ok=1;
		while(ok!=0)
		{
			for(int i=1;i<=k;i++)
			{
				cout<<a[b[i]]<<" ";
			}
			cout<<endl;
			sinh();
		}
	}
}
