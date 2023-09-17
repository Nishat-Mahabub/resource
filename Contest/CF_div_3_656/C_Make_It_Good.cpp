#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int solve(){
        ll n;cin  >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        n--;
        while(v[n-1]>=v[n] && n>0) n--;
        while(v[n-1]<=v[n] && n>0) n--;
        return n;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}