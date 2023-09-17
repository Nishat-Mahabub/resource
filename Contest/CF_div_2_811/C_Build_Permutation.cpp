#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll x=sqrt((n-1)*(n-1));
        vector<ll> v(n);
        for(ll i=n-1;i>=0;i--){
            v[i]=x-i;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}