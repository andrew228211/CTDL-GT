#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>a(100);
vector<vector<int> >ans; 
vector<int>h(100);
vector<string>s;
void Try(int i)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[j]>a[i])
        {   
            h.push_back(a[j]);
            string v="";
    		for(int m=0;m<h.size();m++)
    		{
    			v+=to_string(h[m])+" ";
			}
			s.push_back(v);
            Try(j);
            h.pop_back();
        }
    }
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	h.clear();
    for(int i=0;i<n;i++)
    {
    	h.push_back(a[i]);
        Try(i);
        h.clear();
	}
	sort(s.begin(),s.end());
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i]<<endl;
	}
}

