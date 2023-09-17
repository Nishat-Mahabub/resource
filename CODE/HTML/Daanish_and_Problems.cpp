#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        vector<ll> v(10);
        for(ll i=0;i<10;i++) cin >> v[i];
        ll k;cin >> k;
        ll i=9;
        while(k>0 && i>=0){
            if(k>=v[i]){
                k-=v[i];
                v[i]=0;
                // cout << "man1" << endl;
            }
            else{
                v[i]=v[i]-k;
                k=0;
                // cout << "man" << endl;
            }
            i--;
            // cout << k << endl;
        }
        for(ll i=9;i>=0;i--){
            if(v[i]>0){
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}