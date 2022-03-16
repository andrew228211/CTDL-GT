#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Sapxep{
	int start;
	int end;
};
bool Kt(Sapxep&a,Sapxep&b)
{
	return a.end<b.end;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Sapxep Ds[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>Ds[i].start>>Ds[i].end;
		}
		int cnt=1;
		int dem=0;
		sort(Ds,Ds+n,Kt);
		for(int i=1;i<n;i++)
		{
		//	cout<<Ds[i].start<<" "<<Ds[i].end<<endl;
			if(Ds[i].start>=Ds[dem].end)
			{
				cnt++;
				dem=i;
				//cout<<Ds[i].start<<" "<<Ds[i].end<<endl;
			}
		}
		cout<<cnt<<endl;
	}
}
