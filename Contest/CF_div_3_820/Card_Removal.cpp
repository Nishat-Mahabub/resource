#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            mp[data]++;
        }
        ll mx=INT_MIN;
        for(auto x:mp){
            mx=max(x.second,mx);
        }
        cout << n-mx << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}