#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        // ll n;cin >> n;
        // map<ll,ll> mp;
        // for(ll i=0;i<n;i++){
        //     ll data;cin >> data;
        //     mp[data]=i;
        // }
        // ll ans=0;
        // for(ll i=1;i<=n;i++){
        //     ans++;
        //     ll ind=i;
        //     for(ll j=i+1;j<=n;j++){
        //         // cout << ind << " .";
        //         if(mp[j]>mp[ind]){
        //             ind=j;
        //             i++;
        //         }
        //         else break;
        //     }
        // }
        // cout << ans << endl;

        ll n;cin >> n;
        vector<ll> v(n);
        ll ans=1;
        for(ll i=0;i<n;i++){
            ll data;
            cin >> data;
            v[data-1]=i;
        }
        for(ll i=1;i<n;i++) ans+=(v[i]<v[i-1]);
        cout << ans << endl;
        // ans+=b[i]<b[i-1];


}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}