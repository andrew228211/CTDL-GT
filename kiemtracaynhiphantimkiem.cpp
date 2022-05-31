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
		int s[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		int flag=1;
	    for(int i=1;i<n;i++)
	    {
	        if(s[i-1]>s[i])
	        {
	            cout<<0;
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<1;
	    }
	    cout<<endl;
	}
}
