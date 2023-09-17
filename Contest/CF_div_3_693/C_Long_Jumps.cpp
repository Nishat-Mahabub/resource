#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        
        // vector<ll> ans(n);
        // for(ll i=n-1;i>=0;i--){
        //     if(v[i]+i <n) ans[i]+=ans[v[i]+i] + v[i];
        //     else ans[i]=v[i];
        // }
        // cout << *max_element(ans.begin(),ans.end()) << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}