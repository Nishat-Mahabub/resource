#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        reverse(v.begin(),v.end());
        set<ll> s;
        ll ans=0;
        ll x=1;
        while(x<n){
            if(v[x]==v[0]){
                x++;continue;
            }
            ans++;
            x*=2;
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