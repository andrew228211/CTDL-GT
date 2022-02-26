#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1005],b[1005];
int m;
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
int kt()
{
	for(int i=1;i<=k;i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>b[i];
		for(int i=1;i<=n;i++) a[i]=i;
		m=0;
		int cnt=0;
		while(m!=1)
		{
			cnt++;
			if(kt()==1)
			{
				break;
			}
			sinh();
		}
		cout<<cnt<<endl;
	}
}
