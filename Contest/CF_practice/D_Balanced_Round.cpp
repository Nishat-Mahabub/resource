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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n;i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll ans = 0;
    ll ct = 1;
    for (ll i = 1; i < n;i++){
        while(v[i]-v[i-1] <=k && i<n ){
            ct++;
            i++;
        }
        ans = max(ans, ct);
        ct = 1;
    }
    ans = max(ans, ct);
    cout <<  n - ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}