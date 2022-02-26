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
int main()
{
	cin>>n>>k;
	string ss;
	set<string>s;
	for(int i=0;i<n;i++)
	{
		cin>>ss;
		s.insert(ss);
	}
	vector<string>c;
	c.clear();
	for(auto&x:s)
	{
		c.push_back(x);
	}
	m=0;
	n=c.size();
	for(int i=1;i<=c.size();i++) a[i]=i;
	while(m!=1)
	{
		for(int i=1;i<=k;i++)
		{
			cout<<c[a[i]-1]<<" ";
		//cout<<a[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
}
