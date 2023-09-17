#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<pair<ll,ll> > v(n);
        ll mx;
        for(ll i=0;i<n;i++){
            cin >> v[i].fst;
            v[i].sec=i;
            if(v[i].fst!=i) mx=v[i].fst;
        }
        for(ll i=n-1;i>=0;i--){
            if(v[i].fst!=v[i].sec){
                mx=(mx & v[i].fst);
            }
        }
        cout << mx << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}