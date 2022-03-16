#include<bits/stdc++.h>
using namespace std;
/*
1 101 2 3 100 4 5
1 102 3 4 106 
*/
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		int f[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		memset(f,0,sizeof(0));
		int Max=a[0];
		f[0]=a[0];
		for(int i=1;i<n;i++)
		{
			f[i]=a[i];
			for(int j=i-1;j>=0;j--)
			{
				if(a[i]>a[j])
				{
					f[i]=max(f[i],f[j]+a[i]);
				}
			}
			Max=max(f[i],Max);
		}
		cout<<Max<<endl;
	}
}
