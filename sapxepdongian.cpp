//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int a[n+5],f[n+5];
//	for(int i=1;i<=n;i++) {
//	cin>>a[i];
//	}
//	int cnt=0;
//	for (int i = 1; i <= n; ++i) {
//        f[i] = 1;
//        for (int j = 1; j < i; ++j) {
//            if (a[j] <= a[i] && f[j] + 1 > f[i]) {
//                f[i] = f[j] + 1;
//            }
//        }
//        cnt=max(cnt,f[i]);
//    }
//	cout<<n-cnt<<endl;
//}
//#include <bits/stdc++.h>
//using namespace std;
//vector<int>ans;
//void Tinh(vector<int>&a)
//{
//	int n=a.size();
//	ans.push_back(a[0]);
//	for(int i=1;i<n;i++)
//	{
//		if(a[i]>ans.back())
//		{
//			ans.push_back(a[i]);
//		}
//		else{
//			int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
//			ans[index]=a[i];
//		}
//	}
//}
//int main() {
//	int n;
//	cin>>n;
//	vector<int>a(n);
//	for(int i=0;i<n;i++) cin>>a[i];
//	Tinh(a);
//	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
//}
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	pair<int, int> a[n];
//	for(int i = 0; i < n; i++){
//		cin >> a[i].first;
//		a[i].second = i;
//	}
//	sort(a, a + n);
//	int res = 0, cnt1 = 1, cnt2 = 1;
//	int i = 1;
//	while(i < n && a[i].second > a[i-1].second){
//		cnt1++;
//		i++;
//	}
//	i = n - 2;
//	while(i >= 0 && a[i].second < a[i+1].second){
//		cnt2++;
//		i--;
//	}
//	cout << min(n - cnt1, n - cnt2);
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5],b[100000];
	int Max=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]=b[a[i]-1]+1;
		Max=max(b[a[i]],Max);
	}
	cout<<n-Max;
}
	
