#include<bits/stdc++.h>

using ll = long long;
using namespace std;

// chuyen co so 10 sang 2
// dư của 10 : 2
// 7 : 2 dư 1
//3 : 2 dưu 1
// 1 : 2 dư 1// đảo ngc lại là 111
// mf ngược lại, lấy sô hiện tại * 2 + 1
ll chuyen(string &s, int k){
	ll res = 0;
	for(char &c : s){
		res = res * k + c - '0';
	}
	return res;

}
int main(){
	int t; cin >> t; while(t--){
		string a, b; cin >> a >> b;
		cout << chuyen(a, 2) * chuyen(b, 2) << endl;
	}
}