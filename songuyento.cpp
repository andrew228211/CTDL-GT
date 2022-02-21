#include<bits/stdc++.h>
using namespace std;
int n,s,p;
vector<vector<int> >b(100);
vector<int>a(100),c(100);
int f[900];
int h;
void sang()
{
	for(int i=0;i<=900;i++) f[i]=1;
	f[0]=0;f[1]=0;
	for(int i=2;i<=30;i++)
	{
		if(f[i]==1)
		{
			for(int j=i*i;j<=900;j=j+i)
			{
				f[j]=0;
			}
		}
	}
}
void Try(int i,int sum,int cnt)
{
	if(cnt==n&&sum==s){
		b.push_back(c);
		return;
	}
	if(sum>s||cnt>n) return;
	for(int j=i;j<a.size();j++)
	{
		c.push_back(a[j]);
		Try(j+1,sum+a[j],cnt+1);
		c.pop_back();
	}
}
int main()
{
	int t;
	cin>>t;
	sang();
	while(t--)
	{
		cin>>n>>p>>s;
		int h=0;
		a.clear();
		b.clear();
		c.clear();
		for(int i=p+1;i<s;i++)
		{
			if(f[i]==1)
			{
				a.push_back(i);
			}
		}
//		for(int i=0;i<h;i++) cout<<a[i]<<" ";
		Try(0,0,0);
		cout<<b.size()<<endl;
		for(int i=0;i<b.size();i++)
		{
			for(int j=0;j<b[i].size();j++)
			{
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
