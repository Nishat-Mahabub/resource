#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(2*n);
        for(ll i=0;i<2*n;i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        ll ans=v[0];
        ans++;
        for(ll i=0 ;i<2*n-2;i++){
            if(v[i]==v[i+1]) ans++;
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