#include<bits/stdc++.h>

using namespace std;

int main(){
//	int t;
//	cin >> t;
//	while(t--){
		int n;
		cin >> n;
		int a[105];
		for(int i = 0; i < n; i++) cin >> a[i];
		int x[100][100], cnt = 0;;
		for(int i = 0; i < n-1; i++){
			int tmp = 0, ok = 0;
			for(int j = 1; j < n; j++){
				if(a[tmp] > a[j]){
					swap(a[tmp], a[j]);
					ok = 1;
				}
				tmp = j;
			}
			if(ok){
//				for(int j = 0; j < n; j++){
//					x[cnt][j] = a[j];
//				}
//				cnt++;
				cout << "Buoc " << i + 1<< ": ";
				for(int j = 0; j < n; j++) cout << a[j] << " ";
				cout<<endl;
			}
		}
//		for(int i = 0; i < n; i++){
//			x[cnt][i] = a[i];
//		}
//		for(int i = cnt - 1; i >= 0; i--){
//			cout << "Buoc " << i + 1<< ": ";
//			for(int j = 0; j < n; j++) cout << x[i][j] << " ";
//			cout << endl;
//		}
	//}
}
