#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(auto &x:v) cin >> x;
        sort(v.begin(),v.end());
        ll ans=1;
        for(ll i=0;i<n && ans>=v[i];i++){
            ans+=v[i];
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}