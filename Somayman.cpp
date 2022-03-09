#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m=0,cnt,dem;
		int x=n/7;
		if(x*7<n)
		{
			x=x+1;
		}
		for(int i=x;i<=n;i++)
		{
			if((7*i-n)%3==0)
			{
				m=1;
				cnt=(7*i-n)/3;
				dem=i-cnt;
				break;
			}
		}
		if(m==0)
		{
			cout<<-1<<endl;
		}
		else {
			for(int i=0;i<cnt;i++) cout<<4;
			for(int i=0;i<dem;i++) cout<<7;
			cout<<endl;
		}
	}
}
