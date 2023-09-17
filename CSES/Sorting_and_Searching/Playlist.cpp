#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
    ll n;cin >> n;
    vector<ll> v(n);
    for(auto &x:v) cin >> x;
    ll ans=INT_MIN;
    ll ct=0;
    map<ll,ll> mp;
    ll j=0;
    ll i=0;
    while(i<n){
        if(mp.find(v[i])==mp.end() || mp[v[i]]==0){
            ct++;
            ans=max(ans,ct);
            mp[v[i]]++;
            i++;
        }
        else{
            mp[v[j]]--;
            j++;
            ct--;
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