#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
struct Matran{
	long long f[15][15];
};
Matran operator*(Matran A,Matran B)
{
	Matran C;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			C.f[i][j]=0;
			for(int k=0;k<2;k++)
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
		int n;
		cin>>n;
		Matran X;
		X.f[0][0]=1;X.f[0][1]=1;X.f[1][0]=1;X.f[1][1]=0;
		X=Pow(X,n);
		cout<<X.f[1][0]<<endl;
	}
}
