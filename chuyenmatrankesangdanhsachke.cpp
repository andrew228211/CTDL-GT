#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int main()
{
	int n;
	cin>>n;
	int d;
	for(int i=1;i<=n;i++)
	{
		d=0;
		for(int j=1;j<=n;j++)
		{
			cin>>List[i][j];
			if(List[i][j]==1)
			{
				cout<<j<<" ";
				d=1;
			}
		}
		if(d==1)
		{
			cout<<endl;
		}
	}
}
