#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n);
		vector<vector<int> >b;
		for(int i=0;i<n;i++) cin>>a[i];
		while(a.size()>=1)
		{
			b.push_back(a);
			for(int i=0;i<a.size()-1;i++)
			{
				a[i]=a[i]+a[i+1];
			}
			a.pop_back();
		}
		for(int i=b.size()-1;i>=0;i--)
		{
			cout<<'[';
			for(int j=0;j<b[i].size()-1;j++)
			{
				cout<<b[i][j]<<" ";
			}
			cout<<b[i][b[i].size()-1]<<"] ";
		}
		cout<<endl;
	}
}
