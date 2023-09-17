#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        ll ans=0;
        ll mini=(2*v[0])-1;
        for(ll i=1;i<n;i++){
            if(v[i]>mini){
                if(v[i]%mini!=0) ans+=(v[i]/mini);
                else ans+=(v[i]/mini)-1;
            }
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}