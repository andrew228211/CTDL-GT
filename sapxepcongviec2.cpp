#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Sapxep{
	int job;
	int dead;
	int pro;
};
bool Kt(Sapxep&a,Sapxep&b)
{
	return a.pro>b.pro;
}
void nhap(Sapxep &a)
{
	cin>>a.job>>a.dead>>a.pro;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Sapxep Ds[1005];
		for(int i=0;i<n;i++)
		{
			nhap(Ds[i]);
		}
		sort(Ds,Ds+n,Kt);
		int check[1005]={0};
		int cnt=0,sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=Ds[i].dead-1;j>=0;j--)
			{
				if(check[j]==0)
				{
					check[j]=1;
					cnt++;
					sum+=Ds[i].pro;
					break;
				}
			}
		}
		cout<<cnt<<" "<<sum<<endl;
	}
}
