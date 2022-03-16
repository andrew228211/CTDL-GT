#include<bits/stdc++.h>
using namespace std;
/*
Note        60  80   40   70   50
a[i]>a[i+1] 60  80   120  130
a[i]<a[i+1] 80
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		int x[n+5],y[n+5],b[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			y[n-i-1]=a[i];
		}
		x[0]=a[0];
		for(int i=1;i<n;i++)
		{
			x[i]=a[i];
			for(int j=0;j<i;j++)
			{
				if(a[i]>a[j])
				{
					x[i]=max(x[j]+a[i],x[i]);
				}
			}
		}
		b[0]=y[0];
		for(int i=1;i<n;i++)
		{
		b[i]=y[i];
			for(int j=0;j<i;j++)
			{
				if(y[i]>y[j])
				{
					b[i]=max(b[j]+y[i],b[i]);
				}
			}
		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			ans=max(ans,x[i]-a[i]+b[n-i-1]);
		}
		cout<<ans<<endl;
	}
}
