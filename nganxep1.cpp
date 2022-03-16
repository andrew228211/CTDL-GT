#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int>dq;
	string s;
	while(cin>>s){
		if(s=="push")
		{
			int x;
			cin>>x;
			dq.push_back(x);
		}
		else if(s=="show")
		{
			for(int i=0;i<dq.size();i++)
			{
				int x=dq.front();
				dq.pop_front();
				cout<<x<<" ";
				dq.push_back(x);
			}
				if(dq.empty())
		    {
		    	cout<<"empty";
		    }
			cout<<endl;
		}
		else{
			dq.pop_back();
		}
	}
}
