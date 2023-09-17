#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n,q;cin >> n >> q;
        vector<ll> v(n+1);
        v[0]=0;
        cin >> v[1];
        for(ll i=2;i<=n;i++){
            cin >> v[i];
            v[i]+=v[i-1];
        }
        while(q--){
            ll a,b;cin >> a >> b;
            cout << v[b]-v[a-1] << endl;
        }

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}