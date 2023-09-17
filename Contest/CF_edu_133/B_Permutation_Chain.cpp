#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll k=0;
        cout << n << endl;
        vector<ll> v(n);
        for(ll i=1;i<=n;i++) v[i-1]=i;
        for( ll i=0;i<n;i++) cout << v[i] << " ";
        cout << endl;
        for(int i=0;i<n-1;i++){
            swap(v[i],v[i+1]);
            for( ll i=0;i<n;i++) cout << v[i] << " ";
            cout << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}