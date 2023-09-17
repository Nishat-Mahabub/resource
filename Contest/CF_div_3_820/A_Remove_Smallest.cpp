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
        for(ll i=1;i<n;i++){
            if(v[i]-v[i-1]>1){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}