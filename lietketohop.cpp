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
		set<int>s;
		int z;
		for(int i=1;i<=n;i++){
			cin>>z;
			s.insert(z);
		}
		vector<int>ss;
		for(auto&x:s)
		{
			ss.push_back(x);
		}
		n=ss.size();
		for(int i=1;i<=ss.size();i++) a[i]=i;
		m=0;
		while(m!=1)
		{
			for(int i=1;i<=k;i++)
			{
				cout<<ss[a[i]-1]<<" ";
			}
			cout<<endl;
			sinh();
		}
}

