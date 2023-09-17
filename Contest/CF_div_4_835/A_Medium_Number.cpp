#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        vector<ll> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(),v.end());
        cout << v[1] << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}