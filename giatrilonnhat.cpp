#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>=0)
		{
			sum+=x*2;
		}
	}
	cout<<sum;
}
