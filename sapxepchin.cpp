#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int>h[100];
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{
		int tmp=i,ok=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<ok)
			{
				tmp=j;
				ok=a[j];
			}
		}
		swap(a[i],a[tmp]);
		for(int i=0;i<n;i++)
		{
			h[cnt].push_back(a[i]);
		}
		cnt++;
	}
	for(int i=cnt-1;i>=0;i--)
	{
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++)
		{
			cout<<h[i][j]<<" ";
		}
		cout<<endl;
	}
}
