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
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        ll tmp=v[0];
        ll ct=1;
        bool fg=true;
        for(ll i=1;i<n;i++){
            if(tmp==v[i]){
                ct++;
            }
            else{
                ct=1;
            }
            if(ct==3){
                cout << v[i] << endl;
                fg=false;
                break;
            }
            tmp=v[i];
        }
        if(fg) cout << -1 << endl;
    }
    return 0;
}