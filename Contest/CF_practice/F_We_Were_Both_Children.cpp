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
    ll n;
    cin >> n;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n;i++){
        ll data;
        cin >> data;
        mp[data]++;
    }
    ll ans = 0;
    vector<ll> point(n + 1);
    for(auto x:mp){
        ll hop = x.first, fre = x.second;
        while(hop<=n){
            point[hop] += fre;
            ans = max(ans, point[hop]);
            hop += x.first;
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