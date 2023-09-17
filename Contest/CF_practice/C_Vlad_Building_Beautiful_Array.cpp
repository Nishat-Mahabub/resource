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
        ll even_ct=0;
        ll mn=INT_MAX;
        ll data;
        for(ll i=0;i<n;i++){
            cin >> data;
            if(!(data&1)) even_ct++;
            mn=min(mn,data);
        }
        if(mn&1) cout << "YES" << endl;
        else if(even_ct==n) cout << "YES" << endl;
        else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}