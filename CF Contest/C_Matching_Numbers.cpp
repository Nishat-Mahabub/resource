#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
// #define int long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
#define el '\n'
#define ppl pair<ll,pair<ll,ll>>
#define vl vector<ll> 
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n;cin >> n;
        ll num = (n+1)/2;
        ll m = 2*num;
        if(n%2!=1) {
            cout << "NO" << el;
        }
        else {
            cout << "YES" << el;
            for(int i=n+1;i<=2*n;i++){
                cout << i << " " << (num/m>=1 ? (num%m) + 1 : num ) << el;
                num++;
            }
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}