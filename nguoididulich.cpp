#include<bits/stdc++.h>
using namespace std;
int n;
int a[16][16];
int x[16],chuaxet[16]={0};
int f=999999,sum=0;
void Try(int i)
{
	for(int j=2;j<=n;j++)
	{
		if(chuaxet[j]==0)
		{
			x[i]=j;
			chuaxet[j]=1;
			sum+=a[x[i-1]][j];
			if(i==n&&sum+a[j][1]<f)
			{
				f=sum+a[j][1];
			}
			else if(sum<f&&i<n){
				Try(i+1);
			}
			sum-=a[x[i-1]][j];
			chuaxet[j]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	x[1]=1;
	Try(2);
	cout<<f;
}
