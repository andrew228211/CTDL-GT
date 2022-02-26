#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[200];
int b[200],c[200][200];
int h[200];
int d;
void xuat(int j)
{
	for(int i=1;i<=j;i++)
	{
		c[d][i-1]=b[i];
		//cout<<b[i];
	}
	h[d]=j;
	d++;
}
void Try(int i,int sum)
{
	for(int j=1;j<=n;j++)
	{
		b[i]=a[j];
		if(b[i]+sum<=x&&b[i-1]<=b[i])
		{
			if(b[i]+sum==x) {
			xuat(i);
			}
			else Try(i+1,sum+b[i]);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		d=0;
		memset(b,0,sizeof(b));
		memset(h,0,sizeof(h));
		memset(c,0,sizeof(c));
		Try(1,0);
		if(d==0) cout<<-1;
		else{
			cout<<d;
			for(int i=0;i<d;i++)
			{
				cout<<"{";
				for(int j=0;j<h[i]-1;j++)
				{
					cout<<c[i][j]<<" ";
				}
				cout<<c[i][h[i]-1]<<"} ";
			}
		}
		cout<<endl;
	}
}
