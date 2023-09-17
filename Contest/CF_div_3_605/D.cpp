#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n),lc(n,1),rc(n,1);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll ans=1;
        for(ll i=1;i<n;i++){
            if(v[i]>v[i-1]) lc[i]+=lc[i-1];
            ans=max(ans,lc[i]);
        }
        for(ll i=n-2;i>=0;i--){
            if(v[i]<v[i+1]) rc[i]+=rc[i+1];
            ans=max(ans,rc[i]);
        }
        // for( auto x:rc) cout << x << " ";
        // cout << endl;
        for(ll i=0;i<n-2;i++){
            if(v[i]<v[i+2]) ans=max(ans,lc[i]+rc[i+2]);
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