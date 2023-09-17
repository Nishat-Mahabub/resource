#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n;cin >> n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    ll max=0;
    for(ll i=1;i<n-1;i++){
        bool lc=false;
        bool rc=false;

        ll li,ri;
        for(ll j=i-1;j>=0;--j){
            if(v[j]>v[i]){
                li=j;
                lc=true;
                break;
            }
        }
        if(lc){
            for(ll k=i+1;k<n;k++){
                if(v[k]>v[i]){
                    ri=k;
                    rc=true;
                    break;
                }
            }
        }
        if(rc){
            ll product=(li+1)*(ri+1);
            cout << product << " ";
            if(product>max) max=product;
        }
    }
    cout << max << endl;
    return 0;
}