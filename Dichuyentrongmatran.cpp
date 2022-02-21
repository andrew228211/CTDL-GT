#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100][100];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(i==0||j==0) a[i][j]=1;
			else {
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	cout<<a[m-1][n-1]<<endl;
}
}
