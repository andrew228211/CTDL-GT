#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d;
		string s;
		cin>>d>>s;
		int f['Z'+1]={0};
		for(int i=0;i<s.size();i++)
		{
			f[s[i]]++;
		}
		sort(f+'A',f+'Z',greater<int>());
		if(((f['A']-1)*d+1)<=s.size()) {
		cout<<1<<endl;
		}
		else cout<<-1<<endl;
	}
}
