#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,x;cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll mn=v[0];
        ll mx=v[0];
        ll ct=0;
        for(ll i=1;i<n;i++){
            mx=max(mx,v[i]);
            mn=min(mn,v[i]);
            if(mx-x>mn+x){
                ct++;
                mn=v[i];
                mx=v[i];
            }
        }
        cout << ct << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}