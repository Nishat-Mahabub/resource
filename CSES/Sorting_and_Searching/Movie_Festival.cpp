#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)

bool comp(pair<ll,ll> p1,pair<ll,ll> p2){
    return p1.second<p2.second;
}
//sort(vp.begin(),vp.end(),comp);

void solve(){
    ll n;cin >> n;
    vector<pair<ll,ll>> vp(n);
    for(ll i=0;i<n;i++) {
        cin >> vp[i].first >> vp[i].second ;
    }
    sort(vp.begin(),vp.end(),comp);
    ll ans=1;
    ll start=vp[0].second;
    for(ll i=1;i<n;i++){
        if(vp[i].first>=start){
            ans++;
            start=vp[i].second;
        }
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