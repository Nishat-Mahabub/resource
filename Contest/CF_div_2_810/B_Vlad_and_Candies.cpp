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
        sort(v.rbegin(),v.rend());
        if(n==1){
            if(v[0]==1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if(v[0]==v[1] || v[0]-1==v[1]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}