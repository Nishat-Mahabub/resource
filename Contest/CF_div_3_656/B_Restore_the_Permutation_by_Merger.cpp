#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(2*n);
        for(ll i =0;i<2*n;i++) cin >> v[i];
        vector<bool> c(n+1,false);
        vector<ll> ans;
        for(ll i=0;i<2*n;i++){
            if(c[v[i]]==false) ans.push_back(v[i]);
            c[v[i]]=true;
        }
        for(auto x:ans) cout << x << " ";
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