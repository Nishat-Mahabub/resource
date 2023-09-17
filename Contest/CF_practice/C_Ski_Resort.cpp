#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
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
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n;i++)
        cin >> v[i];
    ll ct = 0;
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        ct = 0;
        while(v[i]<=q && i<n ){
            ct++;
            i++;
        }
        if(ct>=k){
            ll x = ct -k  + 1;
            ans +=(x * (x + 1) / 2);
        }
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