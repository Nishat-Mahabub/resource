#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        vector<ll> ev,ov;
        bool fg=false;
        for(ll i=0;i<n;i++){
            if(i<n-1 && v[i]==v[i+1]-1 && fg==false){
                fg=true;
            }
            if(v[i]&1)ov.push_back(v[i]);
            else ev.push_back(v[i]);
        }
        // cout << ev.size() << " " << ov.size() << endl;
        if(ev.size()%2==0 && ov.size()%2==0) cout << "YES" << endl;
        else if(ev.size()%2!=0 && ov.size()%2!=0 && fg ) cout << "YES" << endl;
        else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}