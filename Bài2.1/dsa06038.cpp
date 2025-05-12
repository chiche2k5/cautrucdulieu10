#include <bits/stdc++.h>
using namespace std;

int b[1000001];

void capnhat(int i){
    for(;i < 1000001;i += i&-i){
        b[i]++;
    }
}

int get(int i){
    int sum=0;
    for(; i ; i -= i&-i) sum += b[i];
    return sum; 
}

int main(){
   
    int n; cin >> n;
    stack<int> st;
    int a[n+1];
    int ans = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = n ;i > 0; i--){
        if(a[i] % 2 == 0){
            ans += get(a[i] - 1);
            st.push(a[i]);
        }
        else{
            while(!st.empty()){
                capnhat(st.top());
                st.pop();
            }
        }
    }
    cout<< ans;
  return 0;
}