#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

void print(ll n){
    if(n<1) return;
    print(n-1);
    cout << n << endl;
}

void solve(){
        ll n;cin >> n;
        print(n);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}