#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n],b[n];
	int m=1;
	int sum;
	int h=1,k;
	while(m==1)
	{
		sum=h;
		a[0]=sum;
		k=s-sum;
		if(k<0)
		{
			break;
		}
		for(int i=n-1;i>=1;i--)
		{
			a[i]=min(k,9);
			sum+=a[i];
			k-=a[i];
			if(k<0)
			{
				break;
			}
		}
		if(sum!=s)
		{
			h++;
		}
		if(sum==s)
		{
			m=0;
			break;
		}
		if(h>9)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		b[i]=min(s,9);
		s-=b[i];
	}
	if(m==1) cout<<"-1 -1";
	else{
		for(int i=0;i<n;i++)
			{
				cout<<a[i];
			}
			cout<<" ";
		for(int i=0;i<n;i++)
		{
			cout<<b[i];
		}
	}
	cout<<endl;
}
