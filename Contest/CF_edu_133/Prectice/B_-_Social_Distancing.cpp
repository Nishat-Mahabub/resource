#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll s,n;cin >> s >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll ans=(s-(v[n-1]-v[0])-2)/2 ;
        for(ll i=1;i<n;i++){
            ans+=(v[i]-v[i-1]-2)/2;
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