#include<bits/stdc++.h>
using namespace std;
int n=8;
int a[11][11];
int xuoi[100],nguoc[100],x[100];
int sum,cnt;
void Try(int i,int sum)
{
	for(int j=1;j<=n;j++)
	{
		if(!x[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1])
		{
			x[j]=1;xuoi[i-j+n]=1;nguoc[i+j-1]=1;
			sum+=a[i][j];
			if(i==n)
			{
				cnt=max(sum,cnt);
			}
			else Try(i+1,sum);
			sum-=a[i][j];
			x[j]=0;xuoi[i-j+n]=0;nguoc[i+j-1]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++) cin>>a[i][j];
		}
		xuoi[100]={0};
		nguoc[100]={0};
		x[100]={0};cnt=0;
		Try(1,0);
		cout<<cnt<<endl;
	}
}
