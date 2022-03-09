#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define sort(a) sort(a.begin(), a.end())
const int oo = 1e9 + 7;
using namespace std;

vector<int> a;
vector<int> a_sorted;
void in()
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='T')
    	{
    		a.push_back(1);
		}
		else if(s[i]=='X')
		{
			a.push_back(0);
		}
		else{
			a.push_back(2);
		}
	}
    a_sorted = a;
    sort(a_sorted);
    int dem = 0;
    for(int i=0;i<n;i++)
    {
    	if(a[i]==a_sorted[i])
    	{
    		a.erase(a.begin()+i);
    		a_sorted.erase(a_sorted.begin()+i);
    		i--;
		}
	}
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != a_sorted[i])
        {
            if (a[i] == 1)
            {
                for (int j = i + 1; j < a.size(); j++)
                    if (a[j] == a_sorted[i])
                    {
                        swap(a[j], a[i]);
                        dem++;
                        break;
                    }
            }
            else
            {
                for (int j = a.size() - 1; j >= i; j--)
                {
                    if (a[j] == a_sorted[i])
                    {
                        swap(a[j], a[i]);
                        dem++;
                        break;
                    }
                }
            }
        }
    }
    cout << dem;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
