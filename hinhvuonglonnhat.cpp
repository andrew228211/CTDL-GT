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
		for(int i=0;i<n;i++)
		{
			f[i][0]=c[i][0];
		}
		for(int i=0;i<m;i++)
		{
			f[0][i]=c[0][i];
		}
		int kq=0;
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<m;j++)
			{
				if(c[i][j]==1)
				{
					f[i][j]=min(f[i-1][j-1],min(f[i][j-1],f[i-1][j]))+1;
				}
				kq=max(kq,f[i][j]);
			}
		}
		cout<<kq<<endl;
	}
}
