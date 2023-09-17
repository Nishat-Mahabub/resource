#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        vector<ll> tmp=v;
        sort(v.begin(),v.end());
        ll x=v[n-1];
        ll y=v[n-2];
        for(ll i=0;i<n;i++){
            if(tmp[i]!=x) cout << tmp[i] - x << " ";
            else cout << x-y << " ";
        }
        cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}