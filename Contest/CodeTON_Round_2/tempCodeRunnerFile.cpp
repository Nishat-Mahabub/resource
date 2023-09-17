#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,x;cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        for(auto x:v) cout << x << " ";
        cout << endl;
        ll vi=v[0]+x;
        ll ct=0;
        for(ll i=0;i<n;i++){
            if(abs(v[i]-vi)<=x) continue;
            else{
                 vi=v[i]+x;
                 ct++;
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