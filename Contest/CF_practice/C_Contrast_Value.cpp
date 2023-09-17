#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//
void solve(){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n;i++){
            cin >> v[i];
        }
        n= unique(v.begin(), v.end()) - v.begin();
        ll ans = n;
        for (ll i = 0; i < n-2;i++){
            ans -= (v[i] > v[i + 1] && v[i + 1] > v[i + 2]);
            ans -= (v[i] < v[i + 1] && v[i + 1] < v[i + 2]);
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}