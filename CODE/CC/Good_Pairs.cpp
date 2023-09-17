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
        ll ct=0;
        vector<ll> va(n),vb(n);
        for(ll i=0;i<n;i++){
            cin  >> va[i];
        }
        for(ll i=0;i<n;i++){
            cin  >> vb[i];
        }
        for(ll i=0;i<n-1;i++){
            for(ll j=i+1;j<n;j++){
                ll a=(va[i]^va[j]);
                ll b=(vb[i]^vb[j]);
                if(a==b) ct++;
            }
        }
        cout << ct << endl;
    }
    return 0;
}