#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        vector<ll> v1,v2;
        v1.push_back(v[0]);
        v2.push_back(v[0]);
        for(ll i=1;i<n;i++){
            v1.push_back(v[i]+v1[i-1]);
        }
        for(ll i=1;i<n;i++){
            if(v[i]<=v2[i-1])v2.push_back(v2[i-1]-v[i]);
            else v2.push_back(v2[i-1]+v[i]);
        }
        if(v1==v2){
            for(auto x:v1) cout << x << " ";
            cout << endl;
        }
        else cout << -1 << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}