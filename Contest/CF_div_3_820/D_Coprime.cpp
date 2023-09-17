#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        // vector<ll> cop(1010);
        // for(ll i=1;i<=n;i++){
        //     ll data;cin >> data;
        //     cop[data]=i;
        // }
        // ll ans=-1;
        // for(ll i=1;i<=1000;i++)for(ll j=1;j<=1000;j++){
        //     if(cop[i] && cop[j] && __gcd(i,j)==1) ans=max(ans,cop[i]+cop[j]);
        // }
        // cout << ans << endl;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            mp[data]=i+1;
        }
        ll ans=-1;
        for(auto i:mp)for(auto j:mp){
            if(__gcd(i.first,j.first)==1) ans=max(ans,i.second+j.second);
        }
        cout << ans << endl;

        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}