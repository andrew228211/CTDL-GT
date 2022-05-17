#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s;
	int q; cin >> q;
	while (q--) {
		char c; cin >> c;
		if (c == 'q') {
			int l, r; cin >> l >> r;
			string tmp = s;
			reverse(tmp.begin() + l - 1, tmp.begin() + r);
			if (tmp == s)cout << "YES\n";
			else cout << "NO\n";
		}
		else {
			int u; cin >> u;
			char x; cin >> x;
			s[u - 1] = x;
		}
	}
}

