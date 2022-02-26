#include<bits/stdc++.h>
using namespace std;
int n;
int a[100],check[100];
int p[10000];
vector<vector<int> >c;
void sang()
{
	for(int i=0;i<10000;i++) p[i]=1;
	p[0]=p[1]=0;
	for(int i=2;i<1000;i++)
	{
		if(p[i]==1)
		{
			for(int j=i*i;j<10000;j=j+i)
			{
				p[j]=0;
			}
		}
	}
}
bool kt1(int a,int b)
{
	return a>b;
}
void xuat()
{
	vector<int>v;
	for(int i=1;i<=n;i++)
	{
		if(check[i]==1)
		{
			v.push_back(a[i]);
		}
	}
	c.push_back(v);
}
int kt(vector<int>x,vector<int>z)
{
	int i=0;
	int d;
	if(x.size()>z.size())
	{
		d=x.size();
		while(x.size()>z.size())
		{
			z.push_back(0);
		}
	}
	else{
		d=z.size();
		while(x.size()<z.size())
		{
			x.push_back(0);
		}
	}
	while(i<d)
	{
		if(x[i]>z[i]) return 0;
		else if(x[i]<z[i]) return 1;
		i++;
	}
}
void Try(int i,int sum)
{
	for(int j=i;j<=n;j++)
	{
		check[j]=1;
		sum+=a[j];
		if(p[sum]==1) xuat();
		Try(j+1,sum);
		sum-=a[j];
		check[j]=0;
	}
}
int main()
{
	int t;
	cin>>t;
	sang();
	while(t--)
	{
		cin>>n;
		c.clear();
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1,kt1);
		Try(1,0);
		sort(c.begin(),c.end(),kt);
		for(int i=0;i<c.size();i++)
		{
			for(int j=0;j<c[i].size();j++)
			{
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
