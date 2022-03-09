#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int cnt1=0,cnt2=0,cnt=0;
		int dem=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='[')
			{
				cnt1++;
				if(dem>0)
				{
					cnt+=dem;
					dem--;
				}
			}
			if(s[i]==']')
			{
				cnt2++;
				dem=cnt2-cnt1;
			}
			cout<<cnt1<<" "<<cnt2<<" "<<dem<<endl;
		}
		cout<<cnt<<endl;
	}
}
