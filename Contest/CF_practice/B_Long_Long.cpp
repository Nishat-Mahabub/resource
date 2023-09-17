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
    vector<ll> v(n);
    ll sum = 0;
    ll op = 0;
    for (ll i = 0; i < n;i++) {
        cin >> v[i];
        sum += abs(v[i]);
    }
    for (ll i = 0; i < n;i++){
        if(v[i]>0) continue;
        bool fg = true;
        while(v[i]<=0 && i<n ){
            if(v[i]<0 && fg ){
                 op++;
                 fg = false;
            }
            i++;
        } 
    }
    cout << sum << " " << op << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}