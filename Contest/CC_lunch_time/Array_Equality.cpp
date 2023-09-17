#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<pair<ll,ll> > ps;
        map<ll,ll> mp; 
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            mp[data]++;
        }
        if(mp.size()==1){
            cout << "No" << endl;
            return;
        }
        for(auto x:mp){
            ps.push_back({x.sec,x.sec});
        }
        sort(ps.begin(),ps.end());
        for(ll i=1;i<ps.size();i++){
            ps[i].fst+=ps[i-1].fst;
        }
        // for( auto x:ps) cout << x.fst << " ";
        // cout << endl;
        // for( auto x:ps) cout << x.sec << " ";
        // cout << endl;
        // for(ll i=1;i<ps.size();i++){
            // cout << ps[i].sec << " " << ps[i-1].fst << endl;
            if(ps[ps.size()-1].sec>ps[ps.size()-2].fst + 1){
                 cout << "No" << endl;
                 return ;
            }
        // }
        cout << "Yes" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}