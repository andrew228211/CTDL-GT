#include<bits/stdc++.h>
using namespace std;
#define pa pair<int,int>
#define fi first
#define se second
int dx[9]={0,-2,-2,-1,-1,1,1,2,2};
int dy[9]={0,-1,1,-2,2,-2,2,-1,1};
int bfs(pa a,pa b)
{
	queue<pair<pa,int>>q;
	q.push({a,0});
	set<pa>s;
	s.insert(a);
	while(!q.empty())
	{
		pair<pa,int>x=q.front();
		q.pop();
		if(x.fi.fi==b.fi&&x.fi.se==b.se)
		{
			return x.se;
		}
		for(int i=1;i<=8;i++)
		{
			pa tmp=x.first;
			tmp.fi=tmp.fi+dx[i];
			tmp.se=tmp.se+dy[i];
			if(s.count(tmp)==0&&1<=tmp.fi&&tmp.fi<=8&&1<=tmp.se&&tmp.se<=8)
			{
				q.push({tmp,x.se+1});
				s.insert(tmp);
			}
		}
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		pa a={(s1[0]-'a')+1,s1[1]-'0'};
		pa b={(s2[0]-'a')+1,s2[1]-'0'};
		cout<<bfs(a,b)<<endl;
	}
}

