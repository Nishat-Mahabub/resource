#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        bool fg=true;
        for(ll i=1;i<n;i++){
            if(v[i]%v[0]!=0){
                 cout << "NO" << endl;
                 fg=false;
                 break;
            }
        }
        if(fg) cout << "YES" << endl;
    }
    return 0;
}