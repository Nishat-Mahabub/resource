#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll ans=0;
        for(ll i=0;i<n;i++){
            for(ll j=i;j<n;j++){
                ans+=j-i+1;
                for(ll k=i;k<=j;k++) if(v[k]==0) ans++;
            }
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