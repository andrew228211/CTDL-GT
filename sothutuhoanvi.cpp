#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int check[100];
vector<int>b(100);
int BinarySearch(int l,int r,int x)
{
	int mid;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(b[mid]==x)
		{
			return mid;
		}
		else if(b[mid]<x)
		{
			l=mid+1;
		}
		else 
		{
			r=mid-1;
		}
	}
}
int giaithua(int x)
{
	int d=1;
	for(int i=1;i<=x;i++)
	{
		d=d*i;
	}
	return d;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		b.clear();
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			b.push_back(i);
		}
		int tong=0;
		int x=n;
		for(int i=1;i<=n;i++)
		{
			int y=BinarySearch(0,b.size()-1,a[i]);
			int z=giaithua(x-1);
			tong=tong+y*z;
			b.erase(b.begin()+y);
			x--;
		}
		cout<<tong+1<<endl;
	}
}
