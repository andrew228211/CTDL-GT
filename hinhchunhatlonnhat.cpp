#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long Max=0;long long cnt;
		for(int i=1;i<n;i++)
		{

			cnt=0;
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]<a[i])
				{
					break;
				}
				cnt++;
			}
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					break;
				}
				cnt++;
			}
			Max=max(Max,(cnt+1)*a[i]);
		}
		cout<<Max<<endl;
	}
}
