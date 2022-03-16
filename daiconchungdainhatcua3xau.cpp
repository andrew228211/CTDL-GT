#include<bits/stdc++.h>
const long long mod = 1e9+7;
using namespace std;
/*
abcd1e2
bc12ea
bd1ea
Note: Xac dinh duoc day con chung dai nhat la d[i][j][k]
va do dai cua no phai bang do dai cai truoc cong lai
d[i][j][k]=d[i-1][j-1][k-1]+1;
*/
int x,y,z;
int d[102][102][102];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		string X,Y,Z;
		cin>>X>>Y>>Z;
		X=" "+X;
		Y=" "+Y;
		Z=" "+Z;
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
			{
				for(int k=1;k<=z;k++)
				{
					if(X[i]==Y[j]&&Y[j]==Z[k])
					{
						d[i][j][k]=d[i-1][j-1][k-1]+1;
					}
					else{
						d[i][j][k]=max(d[i-1][j][k],max(d[i][j-1][k],d[i][j][k-1]));
					}
				}
			}
		}
		cout<<d[x][y][z]<<endl;
	}
}
