#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f[90];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int x;
		for(int i=1;i<=n;i++)
		{
			x=pow(2,i);
			if(k%x==x/2)
			{
				cout<<char(64+i)<<endl;
				break;
			}
		}
	}
}
