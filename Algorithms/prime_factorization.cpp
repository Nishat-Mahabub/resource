#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    v.push_back(i);
                    n/=i;
                }
            }
        }
        if(n>1) v.push_back(n);
        for(auto x:v) cout << x << " ";
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