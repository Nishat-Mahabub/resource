#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
// #define all(rv)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
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
        for (ll i = 0; i < n;i++)
            cin >> v[i];
        vector<ll> tmp(v);
        sort(all(v));
        for (ll i = 0; i < n;i++){
            if(v[i]%2==0 && tmp[i]%2==1) {
                cout << "NO" << endl;
                return;
            }
            if(v[i]%2==1 && tmp[i]%2==0) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}