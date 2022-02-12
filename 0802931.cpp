#include<bits/stdc++.h>
using namespace std;
struct Data{
	int num;
	int ber;
};
bool kt(Data&a,Data&b)
{
	if(a.ber<b.ber) return false;
	if(a.ber==b.ber&&a.num>b.num) return false;
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Data ds[10005];
		int n;
		cin>>n;
		int k;
		map<int,int>x;
		for(int i=0;i<n;i++)
		{
			cin>>k;
			x[k]++;
		}
		int i=0;
		for(auto&y:x)
		{
			ds[i].num=y.first;
			ds[i].ber=y.second;
			i++;
		}
		sort(ds,ds+i,kt);
		for(int j=0;j<i;j++)
		{
			for(int k=0;k<ds[j].ber;k++)
			{
				cout<<ds[j].num<<" ";
			}
		}
		cout<<endl;
	}
}
