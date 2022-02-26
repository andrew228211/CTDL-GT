#include<bits/stdc++.h>
using namespace std;
int n;
int a[100],check[100];
vector<vector<int> >y;
bool kt1(int a,int b)
{
	return a>b;
}
void xuat()
{
	vector<int>x;
	for(int i=1;i<=n;i++)
	{
		if(check[i]==1)
		{
			x.push_back(a[i]);
		}
	}
	y.push_back(x);
	
}
void Try(int i,int sum)
{
	for(int j=i;j<=n;j++)
	{
		check[j]=1;
		sum+=a[j];
		if(sum%2!=0) xuat();
		Try(j+1,sum);
		sum-=a[j];
		check[j]=0;
	}
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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i],check[i]=0;
		sort(a+1,a+n+1,kt1);
		y.clear();
		Try(1,0);
		sort(y.begin(),y.end(),kt);
		for(int i=0;i<y.size();i++)
		{
			for(int j=0;j<y[i].size();j++)
			{
				cout<<y[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
