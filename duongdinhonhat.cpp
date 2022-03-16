#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int c[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>c[i][j];
			}
		}
		int f[n][m];
		memset(f,0,sizeof(f));
		f[0][0]=c[0][0];
		for(int i=1;i<n;i++) f[i][0]=f[i-1][0]+c[i][0];
		for(int i=1;i<m;i++) f[0][i]=f[0][i-1]+c[0][i];
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<m;j++)
			{
				f[i][j]=min(f[i-1][j-1],min(f[i][j-1],f[i-1][j]))+c[i][j];
			}
		}
		cout<<f[n-1][m-1]<<endl;
	}
}
