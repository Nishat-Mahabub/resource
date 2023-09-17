#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

bool isSorted(vector<ll> &v){
    for(ll i=1;i<v.size();i++){
        if(v[i]<v[i-1]) return false;
    }
    return true;
}

void solve(){
        ll n;cin >> n;
        vector<ll> odd;
        vector<ll> even;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            if(data&1) odd.push_back(data);
            else even.push_back(data);
        } 
        if(isSorted(odd) && isSorted(even)) cout << "Yes" << endl;
        else cout << "No" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}