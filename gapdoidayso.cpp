#include<bits/stdc++.h>
using namespace std;
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
				cout<<i<<endl;
				break;
			}
		}
	}
}
