#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll data;
        for(ll i=0;i<n;i++) cin >> data;
        ll ans=1;
        for(ll i=(10-n-1);i<=(10-n);i++) ans*=i;
        cout << ans*3 << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}