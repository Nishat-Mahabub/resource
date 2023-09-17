#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        while(k--){
            ll a,s;
            cin >> a;
            if(a==1){
                ll s;cin >> s;
                for(ll i=0;i<n;i++) v[i]-=s;
            }
            else if(a==2){
                ll l,r,ith;cin >> l >> r >> ith;
                vector<ll> tmp;
                for(ll i=0;i<n;i++) if(v[i]>=l && v[i]<=r) tmp.push_back(v[i]);
                sort(tmp.begin(),tmp.end());
                // for(auto &x:tmp) cout << x << " ";
                // cout << endl;
                if(ith>tmp.size()) cout << -1 << endl;
                else cout << tmp[ith-1] << endl;
            }
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}