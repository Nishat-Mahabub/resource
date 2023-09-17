#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
vector<ll> mem(1000,-1);
ll fib(ll n){
    if(mem[n]!=-1) return mem[n];
    if(n==0 || n==1) return n;
    return mem[n] = fib(n-2) +fib(n-1);
}

void solve(){
        ll n;cin >> n;
        cout << fib(n) << endl;
        // for(auto x:mem) cout << x << " ";
        // cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}