#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,q;cin >> n >> q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        for(ll i=1;i<n;i++) v[i]+=v[i-1];
        while(q--){
            ll x;cin >> x;
            auto i=lower_bound(v.begin(),v.end(),x) ;
            
            if(i!=v.end()) cout << i - v.begin()+1 << endl;
            else cout << -1 << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}