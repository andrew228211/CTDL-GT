#include<bits/stdc++.h>
using namespace std;
int n,k;
string a;
vector<string>b;
void xuat()
{
	int check=0;
	for(int i=0;i<n-k+1;i++)
	{
		int cnt =0;
			for(int j=i;j<i+k;j++)
			{
				if(a[j]=='A') cnt++;
			}
		if(cnt==k)
		{
			check++;
		}
	}
	string u;
	if(check==1)
	{
		for(int i=0;i<n;i++)
		{
			u+=a[i];
		}
		b.push_back(u);
	}
}
void Try(int i)
{
	for(char j='A';j<='B';j++)
	{
		a[i]=j;
		if(i==n-1)
		{
			xuat();
		}
		else Try(i+1);
	}
}
int main()
{
	cin>>n>>k;
	Try(0);
	cout<<b.size()<<endl;
	for(int i=0;i<b.size();i++)
	{
		cout<<b[i]<<endl;
	}
}
