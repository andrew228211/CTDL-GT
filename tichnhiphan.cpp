#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y;
		cin>>x>>y;
		long long x1=0,y1=0;
		for(int i=0;i<x.size();i++)
		{
			if(x[i]=='1')
			{
				x1+=pow(2,x.size()-i-1);
			}
		}
		for(int i=0;i<y.size();i++)
		{
			if(y[i]=='1')
			{
				y1+=pow(2,y.size()-i-1);
			}
		}
		cout<<x1*y1<<endl;
	}
}
