#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        map<ll,ll> mp;
        map<ll,ll> mp2;
        for(ll i=1;i<=n;i++){
            ll data;cin >> data;
            mp[data]++;
            mp2[data]=i;
        }
        for(auto x: mp){
            if(x.second==1){
                cout << mp2[x.first] ;
                return;
            }
        }
        cout << -1 ;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}