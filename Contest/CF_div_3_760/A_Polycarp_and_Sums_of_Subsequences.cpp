#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        vector<ll> v(7);
        for(ll i=0;i<7;i++) cin >> v[i];
        sort(v.begin(),v.end());
        ll x=*max_element(v.begin(),v.end());
        cout << v[0] << " " << v[1]  << " " << x-(v[0]+v[1]) << endl;

    }
    return 0;
}