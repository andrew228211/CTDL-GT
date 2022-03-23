#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		queue<int>dq;
		while(n--)
		{
		int x;
		cin>>x;
		switch (x)
		{
			case 1:
				{
					cout<<dq.size()<<endl;
					break;	
				}
			case 2:
				{
					if(dq.empty())
					{
						cout<<"YES";
					}
					else cout<<"NO";
					cout<<endl;
					break;
				}
			case 3:
				{
					int y;
					cin>>y;
					dq.push(y);
					break;
				}
			case 4:
				{
					if(!dq.empty())
					{
						dq.pop();
					}
					break;
				}
			case 5:
				{
					if(!dq.empty())
					{
						cout<<dq.front();
					}
					else{
						cout<<-1;
					}
					cout<<endl;
					break;
				}
			case 6:
				{
					if(!dq.empty())
					{
						cout<<dq.back();
					}
					else{
						cout<<-1;
					}
					cout<<endl;
					break;
				}	
			}
		}
	}
}
