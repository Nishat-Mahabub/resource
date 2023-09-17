#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

vector<ll> v;
// one parameter...
void rev(ll i){
    if(i>=v.size()/2) return;
    swap(v[i],v[v.size()-i-1]);
    rev(i+1);
}
// two parameter...
void rev(ll l,ll r){
    if(l>=r) return;
    swap(v[l],v[r]);
    rev(l+1,r-1);
}

void solve(){
        ll n;cin >> n;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            v.push_back(data);
        }
        // for(ll i=0;i<n/2;i++){
        //     swap(v[i],v[n-i-1]);
        // }
        // rev(0);
        rev(0,n-1);
        for(auto x:v) cout << x << " ";
        cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        v.clear();
        solve();
    }
    return 0;
}