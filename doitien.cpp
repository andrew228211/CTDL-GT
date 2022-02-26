#include<bits/stdc++.h>
using namespace std;
int n,s;
int a[100];
int Min=1e7;
void Try(int i,long long sum,int d)
{
	if(sum>s||d>Min) return;
	if(i==n)
	{
		if(sum==s) Min=min(Min,d);
		return;
	}
	Try(i+1,sum,d);
	Try(i+1,sum+a[i],d+1);
}
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Try(0,0,0);
	if(Min==1e7) cout<<-1;
	else cout<<Min;
}
