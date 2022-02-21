#include<bits/stdc++.h>
using namespace std;
int n,k;
int m,a[100];
/*
6 2
DONG TAY NAM BAC TAY BAC
*/
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
	 else m=0;
}
int main()
{
	cin>>n>>k;
	string s;
	set<string>x;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		x.insert(s);
	}
	n=x.size();
	for(int i=1;i<=n;i++) a[i]=i;
	m=1;
	vector<string>b;
	for(auto&y:x)
	{
		b.push_back(y);
	}
	while(m!=0)
	{
		for(int i=1;i<=k;i++)
		{
			cout<<b[a[i]-1]<<" ";
		}
		cout<<endl;
		sinh();
	}
}
