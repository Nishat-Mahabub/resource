#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        cin >> v[0];
        for(ll i=1;i<n;i++) {
            cin >> v[i];
            v[i]+=v[i-1];
        }
        // for(auto x:v) cout << x << " ";
        //55 100 130 160 200 300
        //4 5 6 7 8 12
        ll ans=n;
        for(ll i=0;i<n;i++){
            ll seg=2*v[i];
            ll mn=i+1;
            ll tmp=i;
            bool fg=false;
            for(ll j=i+1;j<n;j++){
                if(v[j]==seg){
                    mn=max(mn,j-tmp);
                    seg+=v[i];
                    tmp=j;
                    fg=true;
                }
            }
            // cout << "mn " << mn << endl;
            if(tmp==n-1 && fg ) ans=min(ans,mn);
        }
        cout <<  ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}