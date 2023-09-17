#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        for(auto &x:v) cin >> x;
        map<ll,ll> mp;
        mp[0]++;
        ll sum=0;
        ll ans=0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
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