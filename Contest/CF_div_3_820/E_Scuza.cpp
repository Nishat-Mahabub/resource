#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,q;cin >> n >> q;
        vector<ll> vn(n),k(q);
        ll mx=INT_MIN;
        for(ll i=0;i<n;i++){
             cin >> vn[i];
             mx=max(mx,vn[i]);
        }
        for(ll i=0;i<q;i++) cin >> k[i];
        vector<ll> mask(n);
        
        ll m=vn[0];
        mask[0]=m;
        for(ll i=1;i<n;i++){
            m=max(m,vn[i]);
            mask[i]=m;
        }
        // for(auto x:mask) cout << x << " ";
        // cout << endl;
        for(ll i=1;i<n;i++){
            vn[i]+=vn[i-1];
        }
        for(ll i=0;i<q;i++){
            if(k[i]>=mx) cout << vn[n-1] << " ";
            else{
                ll x=upper_bound(mask.begin(),mask.end(),k[i])- mask.begin(); 
                if(x==0)cout << 0 << " ";
                else cout << vn[x-1] << " ";
            }
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