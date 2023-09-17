#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n,x;cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            if(mp.find(x-v[i])!=mp.end()){
                cout << mp[x-v[i]] +1 << " " << i+1  << endl;
                return;
            }
            mp[v[i]]=i;
        }
        cout << "IMPOSSIBLE" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}