#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll ct=0;
        for(ll i=1;i<n-1;i++){
            if(v[i]>v[i-1]+v[i+1]) ct++;
        } 
        if(k==1) cout << (n-1)/2 << endl;
        else cout << ct << endl;
    }
    return 0;
}