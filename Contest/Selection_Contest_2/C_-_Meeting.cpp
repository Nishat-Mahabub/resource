#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> va(n);
        vector<ll> vb(n);
        for(ll i=0;i<n;i++) cin >> va[i];
        for(ll i=0;i<n;i++) cin >> vb[i];
        sort(va.begin(),va.end());
        sort(vb.begin(),vb.end());
        ll x=*max_element(va.begin(),va.end());
        ll y=*min_element(vb.begin(),vb.end());
        if(x>y) cout << 0 << endl;
        else cout << y-x +1 << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}