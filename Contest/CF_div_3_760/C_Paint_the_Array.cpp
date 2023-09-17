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
        ll cd1=v[0];
        bool f1=true,f2=true;
        for(ll i=2;i<n;i+=2) cd1=__gcd(cd1,v[i]);
        for(ll i=1;i<n;i+=2) {
            if(v[i]%cd1==0){
                f1=false;
            }
        }
        ll cd2=v[1];
        for(ll i=3;i<n;i+=2) cd2=__gcd(cd2,v[i]);
        for(ll i=0;i<n;i+=2) {
            if(v[i]%cd2==0){
                f2=false;
            }
        }
        if(f1) cout << cd1 << endl;
        else if(f2) cout << cd2 << endl;
        else cout << 0 << endl;
    }
    return 0;
}