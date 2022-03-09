#include<bits/stdc++.h>
using namespace std;
int n,d;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		int a[d];
		int m=1;
		int sum;
		int h=1,k;
		while(m==1)
		{
			sum=h;
			a[0]=sum;
			k=n-sum;
			for(int i=d-1;i>=1;i--)
			{
				a[i]=min(k,9);
				sum+=a[i];
				k=k-a[i];
				if(k<0)
				{
					break;
				}
			}
			if(sum!=n)
			{
				h++;
			}
			if(sum==n)
			{
				for(int i=0;i<d;i++)
				{
					cout<<a[i];
				}
				m=0;
			}
			if(h>9)
			{
				break;
			}
		}
		if(m==1) cout<<-1;
		cout<<endl;
	}
}
