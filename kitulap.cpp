#include<bits/stdc++.h>
using namespace std;
int n;
vector<string>s(11);
int check[100]={0},a[100];
int cnt=0,Min=1e9;
int kt(string x,string y)
{
	int d=0;
	int f['Z'+1]={0};
	for(int i=0;i<x.size();i++)
	{
		f[x[i]]++;
	}
	for(int i=0;i<y.size();i++)
	{
		f[y[i]]++;
	}
	for(char i='A';i<='Z';i++)
	{
		if(f[i]==2)
		{
			d++;
		}
	}
	return d;
}
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j]==0)
		{
			check[j]=1;
			a[i]=j;
			int dem=kt(s[a[i-1]],s[j]);
			cnt+=dem;
			if(i==n&&Min>cnt)
			{
				Min=cnt;
			}
			else if(i<n&&Min>cnt) Try(i+1);
			check[j]=0;
			cnt-=dem;
		}
	}
}
int main()
{
	cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++) {
	cin>>s[i];
}
	s[0]="";
	Try(1);
	cout<<Min;
}
