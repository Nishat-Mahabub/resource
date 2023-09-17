#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
          map<ll,ll> mp;
        for(ll i=0;i<n;i++){
             cin >> v[i];
             mp[v[i]]++;
        }
        for(ll i=0;i<n;i++){
            if(mp.find(v[i]+k)!=mp.end()){
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}