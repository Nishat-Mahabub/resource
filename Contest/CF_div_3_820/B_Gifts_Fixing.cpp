#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> va(n),vb(n);
        for(ll i=0;i<n;i++) cin >> va[i];
        for(ll i=0;i<n;i++) cin >> vb[i];
        ll x=*min_element(va.begin(),va.end());
        ll z=*min_element(vb.begin(),vb.end());
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll d=va[i]-x;
            ans+=d;
            if(vb[i]-d <z) vb[i]=z;
            else{
                vb[i]-=d;
            }
        }
        ll y=*min_element(vb.begin(),vb.end());
        for(ll i=0;i<n;i++){
            ans+=vb[i]-y;
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