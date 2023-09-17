#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    ll k;cin >> k;
    ll x_or=0;
    map<ll,ll> mp;
    ll ans=0;
    for(ll i=0;i<n;i++){
        x_or^=v[i];
        if(x_or==k) ans++;
        if(mp[x_or^k]>0) ans+=mp[x_or^k];
        mp[x_or^k]++;
    }
    cout << ans << endl;
    return 0;
    
}