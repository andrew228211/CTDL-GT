#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll p,q;
		cin>>p>>q;
		ll u=__gcd(p,q);
		p=p/u;q=q/u;
		for(int i=2;i<=q;i++)
		{
			if(p==1)
			{
				cout<<1<<"/"<<q<<endl;
				break;
			}
			if(p*i-q>0)
			{
				cout<<1<<"/"<<i<<" + ";
				p=p*i-q;
				q=q*i;
				u=__gcd(p,q);
				p=p/u;q=q/u;
			}
		}
	}
}
