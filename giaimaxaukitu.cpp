#include <bits/stdc++.h>
using namespace std;
int main() {
    int  t= 1;
	cin >> t;
    while (t--) {
        string s; cin >> s;
    stack<string> st1;
    stack<int> st2;
    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            int num = 0;
            while (i < s.length() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            st2.push(num);
        }
        else if (s[i] == ']') {
            string tmp = "";
            while (st1.top() != "[") {
                tmp = st1.top() + tmp;
                st1.pop();
            }
            st1.pop(); // bo dau [

            string res = "";
            int dem = st2.top(); st2.pop();
            while (dem--) res += tmp;
            st1.push(res);
        }
        else {
            st1.push(string(1, s[i]));
            if (s[i] == '[' &&!isdigit(s[i-1]))
                st2.push(1);
        }
    }

    string ans = "";
    while (!st1.empty()) {
        ans = st1.top() + ans;
        st1.pop();
    }
    cout << ans<<endl;
    }
}
