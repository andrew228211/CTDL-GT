#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>a;
vector<vector<int> >b;
void Try(int i,int sum,int k)
{
	for(int j=k;j>=1;j--)
	{
		if(sum+j<=n)
		{
			sum+=j;
			a.push_back(j);
			if(sum==n){
				b.push_back(a);
			}
			else Try(i+1,sum,j);
			sum-=j;
			a.pop_back();
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a.clear();
		b.clear();
		Try(1,0,n);
		cout<<b.size()<<endl;
		for(int i=0;i<b.size();i++)
		{
			cout<<'(';
			for(int j=0;j<b[i].size()-1;j++)
			{
				cout<<b[i][j]<<" ";
			}
			cout<<b[i][b[i].size()-1]<<')'<<" ";
		}
		cout<<endl;
	}
}
