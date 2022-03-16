//#include<bits/stdc++.h>
//using namespace std;
//int n,s[1005],a[1005],len;
//void Get(int x,int j)
//{
//	for(int i=2;i*i<=x;i++)
//	{
//		while(x%i==0)
//		{
//			s[i]+=j;
//			x/=i;
//		}
//	}
//	if(x!=1) s[x]+=j;
//}
//void Tinh(int x)
//{
//	len+=10;
//	for(int i=0;i<len;i++)
//	{
//		a[i]*=x;
//	}
//	for(int i=0;i<len;i++)
//	{
//		a[i+1]+=a[i]/10;
//		a[i]%=10;
//	}
//	while(len>0&&!a[len-1]) len--;
//}
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		memset(s,0,sizeof(s));
//		memset(a,0,sizeof(a));
//		cin>>n;
//		for(int i=1;i<=n;i++) Get(2*n-i+1,1);
//		for(int i=1;i<=n+1;i++) Get(i,-1);
//		a[0]=1;len=1;
//		for(int i=1;i<1005;i++)
//		{
//			while(s[i]--)
//			{
//				Tinh(i);
//			}
//		}
//		for(int i=len-1;i>=0;i--)
//		{
//			cout<<a[i];
//		}
//		cout<<endl;
//	}
//}
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll n; string s[5005];
string tong(string a,string b)
{
	 	string ans = "";
        while (a.size() > b.size())
            b = "0" + b;
        while (a.size() < b.size())
            a = "0" + a;
        int du = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int tmp = a[i] - '0' + b[i] - '0' + du;
            du = tmp / 10;
            tmp %= 10;
            ans = (char)(tmp + '0') + ans;
        }
        if (du)
            ans = "1" + ans;
        return ans;
}
string tich(string a,string b)
{
	int len1 = a.size(), len2 = b.size();
	vector<int>res(len1 + len2, 0);
	int tmp1 = 0, sum;
	for (int i = len1 - 1; i >= 0; i--)
	{
		int tmp2 = 0, c = 0;
		int m = a[i] - '0';
		for (int j = len2 - 1; j >= 0; j-- )
		{
			int n = b[j] - '0';
			sum = m * n + c + res[tmp1 + tmp2];
			c = sum / 10;
			res[tmp1 + tmp2] = sum % 10;
			tmp2++;
		}
		if (c > 0) res[tmp1 + tmp2] += c;
		tmp1++;
	}
	int len = res.size() - 1;
	while (len >= 0 && res[len] == 0) len--;
	if (len < 0) {
		cout << 0 << endl;
	}
	string s2;
	for (int i = len; i >= 0; i--)
	{
		s2=s2+char(res[i]+'0');
	}
	return s2;
}
int main()
{
	cin>>n;
	s[0]="1";
	s[1]="1";
	for(int i=2;i<=n;i++)
	{
		string tmp="";
		for(int j=0;j<i;j++)
		{
			if(n%2==0)
			{
			string tmp1="0";
			tmp=tong(tmp,tich(s[j],s[i-j-1]));
		}
		s[i]=tmp;
	}
	cout<<s[n]<<endl;

}}
