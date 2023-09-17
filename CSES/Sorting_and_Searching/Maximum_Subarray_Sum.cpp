#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
    ll n;cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    ll ans=v[0];
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=v[i];
        ans=max(ans,sum);
        if(sum<0) sum=0;
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