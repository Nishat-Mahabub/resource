#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
ll ans=0;
ll sum(ll n){
    cout << n << endl;
    if(n==0) return 0;
    return n + sum(n-1);
}

void solve(){
        ll n;cin >> n;
        cout << sum(n) << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}