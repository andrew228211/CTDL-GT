#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		vector<vector<int> >List(55);
		int chuaxet[55][55];
		memset(chuaxet,0,sizeof(chuaxet));
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
				if(chuaxet[i][x]==0)
				{
					List[i].push_back(x);
					chuaxet[x][i]=1;
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<List[i].size();j++)
			{
				cout<<i<<" "<<List[i][j]<<endl;
			}
		}
}

