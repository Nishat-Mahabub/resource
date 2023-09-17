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
        sort(v.begin(),v.end());
        ll sum=0;
        for(ll i=0;i<n-1;i++) sum+=v[i];
        if(sum<=v[n-1]) cout << 2*v[n-1] << endl;
        else cout << accumulate(v.begin(),v.end(),0ll) << endl;
        
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}