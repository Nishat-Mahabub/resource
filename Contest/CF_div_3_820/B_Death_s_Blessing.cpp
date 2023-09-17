#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll maxx=INT_MIN;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            ans+=data;
        }
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            ans+=data;
            maxx=max(maxx,data);
        }
        cout << ans - maxx << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}