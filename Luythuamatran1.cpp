#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int x;
struct Matran{
	long long f[15][15];
};
Matran operator*(Matran A,Matran B)
{
	Matran C;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			C.f[i][j]=0;
			for(int k=0;k<x;k++)
			{
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%m)%m;
			}
		}
	}
	return C;
}
Matran Pow(Matran A,int n)
{
	if(n==1) return A;
	Matran X=Pow(A,n/2);
	if(n%2==0) return X*X;
	return A*X*X;
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>x>>k;
		Matran X;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<x;j++)
			{
				cin>>X.f[i][j];
			}
		}
		X=Pow(X,k);
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<x;j++)
			{
				cout<<X.f[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
