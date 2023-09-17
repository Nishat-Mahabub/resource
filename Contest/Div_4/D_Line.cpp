#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        vector<pair<ll,ll>> vp;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll l,r;
            if(s[i]=='L'){
                l=i-0;
                r=n-1-i;
                ans+=l;
                if(r>l) vp.push_back({r,l});
            }
            else{
                l=i-0;
                r=n-1-i;
                ans+=r;
                if(l>r) vp.push_back({l,r});
            }
        }
        // cout << ans << endl;
        sort(vp.rbegin(),vp.rend());
        // for(auto x:vp){
        //     cout << x.f << " " << x.s << endl;
        // }
        for(ll i=1;i<vp.size();i++){
            vp[i].f+=vp[i-1].f;
            vp[i].s+=vp[i-1].s;
        }
        for(ll i=0;i<n;i++){
            if(vp.size()==0) cout << ans << " " ;
            else if(i>=vp.size()) cout << ans + (vp[vp.size()-1].f-vp[vp.size()-1].s) << " ";
            else cout << ans + (vp[i].f-vp[i].s) << " ";
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