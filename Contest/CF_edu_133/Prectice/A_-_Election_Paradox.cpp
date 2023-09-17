#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        ll ans=0;
        for(ll i=0;i<n/2;i++){
            ans+=v[i];
        }
        for(ll i=n/2;i<n;i++){
            ans+=v[i]/2;
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