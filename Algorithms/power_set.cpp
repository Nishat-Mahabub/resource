#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        for(ll i=0;i<pow(2,n);i++){ // O(2^n)
            for(ll j=0;j<n;j++){ // O(n)->loop for cheking ith set bit;
                if((i&(1<<j))!=0) cout << v[j] << " ";
            }
            cout << endl;
        }
        //Total time complexity O(n*2^n)...
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}