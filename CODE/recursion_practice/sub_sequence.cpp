#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

void ss(ll i,vector<ll> &p,vector<ll> &v,ll &n){
    if(i==n){
        for(auto data:p) cout << data << " ";
        cout << endl;
        return;
    }
    p.push_back(v[i]);
    ss(i+1,p,v,n);
    p.pop_back();
    ss(i+1,p,v,n);
}

void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        vector<ll> p;
        ss(0,p,v,n);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}