#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,k;cin >> n >> k;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i].fst;
            v[i].sec=i;
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(ll i=0;i<k;i++){
            if(v[i].sec>k-1) ans++;
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