#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
int n;
struct Luy{
	ll matrix[10][10];
};
Luy Nhan(Luy a,Luy b)
{
	Luy c;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c.matrix[i][j]=0;
			for(int k=0;k<n;k++)
			{
				c.matrix[i][j]=(c.matrix[i][j]+a.matrix[i][k]*b.matrix[k][j]%mod)%mod;
			}
		}
	}
	return c;
}
Luy Pow(Luy a,int k)
{
	if(k==1) return a;
	if(k%2==0)
	{
		return Pow(Nhan(a,a),k/2);
	}
	else{
		return Nhan(a,Pow(Nhan(a,a),k/2));
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>n>>k;
		Luy a;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a.matrix[i][j];
			}
		}
		Luy b=Pow(a,k);
		ll sum=0;
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				cout<<b.matrix[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		for(int i=0;i<n;i++)
		{
			sum=(sum+b.matrix[i][n-1])%mod;
		}
		cout<<sum<<endl;
	}
}
