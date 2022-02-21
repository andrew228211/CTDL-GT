#include<bits/stdc++.h>
using namespace std;
vector<long long>a;
void Try(long long i)
{
	if(i>1e17) return;
	a.push_back(i);
	Try(i*10);
	Try(i*10+9);
}
int main()
{
	int t;
	cin>>t;
	Try(9);
	sort(a.begin(),a.end());
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]%n==0)
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}
}
