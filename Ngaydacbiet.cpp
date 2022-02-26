#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<char>a;
	vector<char>b;
	for(int i=0;i<3;i++) a.push_back('0');
	b.push_back('0');
	b.push_back('2');
	for(int h=0;h<3;h++)
	{
		for(int i=0;i<8;i++)
		{
		for(int j=0;j<b.size();j++)
		{
			cout<<b[j];
		}
		cout<<"/02/2";
		for(int j=0;j<a.size();j++)
		{
			cout<<a[j];
		}
		cout<<endl;
		for(int i=2;i>=0;i--)
		{
			if(a[i]=='0')
			{
				a[i]='2';
				break;
			}	
			else a[i]='0';
		}
		}
		for(int i=1;i>=0;i--)
		{
			if(b[i]=='0')
			{
				b[i]='2';
				break;
			}	
			else b[i]='0';
		}	
	}
}
