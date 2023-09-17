#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        set<ll> s;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            s.insert(data);
        }
        if(n==s.size()) cout << "YES" << endl;
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