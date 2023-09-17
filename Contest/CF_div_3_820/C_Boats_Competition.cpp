#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        set<ll> s;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                s.insert(v[i]+v[j]);
            }
        }
        ll ans=0;
        
        // for(auto x: s) cout << x << " ";
        // cout << endl;
        for(auto x:s){
            ll ct=0;
            map<ll,ll> mp;
            for(int i=0;i<n;i++){
                if(mp[x-v[i]]>0){
                    mp[x-v[i]]--;
                    ct++;
                }
                else mp[v[i]]++;
            }
            // cout << "For " << x << " -> " << ct << endl;
            ans=max(ans,ct);
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