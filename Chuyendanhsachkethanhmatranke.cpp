#include<bits/stdc++.h>
using namespace std;
int List[1005][1005];
int main()
{
		int n;
		cin>>n;
		memset(List,0,sizeof(List));
		string s;
		cin.ignore();
		for(int i=1;i<=n;i++)
		{
			getline(cin,s);
			stringstream ss(s);
			string tmp;
			while(ss>>tmp)
			{
				int x=atoi(tmp.c_str());
				List[i][x]=1;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<List[i][j]<<" ";
			}
			cout<<endl;
		}
}
