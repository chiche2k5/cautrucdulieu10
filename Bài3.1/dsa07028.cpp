#include<bits/stdc++.h>

using ll = long long;
using namespace std;

// tinh nhịp tăng giảm của phiên chứng khoán trong n ngày
// nhịp ck ngày thứ i là số ngày liên tiếp từ ngày thứ i trở về
// mà giá ck < hoặc = giá ck ngày i

int main(){
	int t; cin >> t; while(t--){
		int n;  cin >> n;
		int a[n];
		for(int i = 0;  i < n;  i++){
			cin >> a[i];
		}
		int kq[n];
		stack<pair<int, int>> st;
		// 1 cái là vị trí, 1 cái là giá trọ
		for(int i = 0; i < n; i++){
			while(st.size() && st.top().first <= a[i]){
				st.pop();
			}
			if(st.empty()) kq[i] = i + 1;
			else{
				kq[i] = i - st.top().second;
			}
			st.push({a[i], i});
		}
		for(int i = 0;  i < n; i++){
			cout << kq[i]<< " ";
		}
		cout << endl;
	}
}