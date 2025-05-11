#include<bits/stdc++.h>

using ll = long long;
using namespace std;

// 4/5 -> tach ra lon nhat co tu = 1
// chia tu cho mau -> 1/(5:4) = 1/1
// suy ra so nho nhat dau tien la 1/2
// p/q - 1/maumoi = (p*maumoi - 1*q)/q*maumoi

int main(){
	int t; cin >> t;
	while(t--){
		ll p, q; cin >> p >> q;
		while(q % p){
			// so tach ra cang lon cang tot
			// thi mau cang nho cang 
			ll maumoi = q/p + 1;
			cout << "1/" << maumoi << " + ";
			//in ra phan tru di cai in roi
			p = p * maumoi - q;
			q = q * maumoi;
		}
		cout << "1/" << q/p << endl;
	}
}