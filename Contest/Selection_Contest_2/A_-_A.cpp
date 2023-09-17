#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,m;cin >> n >> m;
        ll element;
        for(ll i=0;i<n;i++) cin >> element;
        for(ll i=0;i<m;i++) cin >> element;
        if(n>m) cout << "No" << endl;
        else cout << "Yes" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}