#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
#define f first
#define s second
#define pb push_back
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
        ll n,q;cin >> n >> q;
        vector<ll> v(n+1);
        for(ll i=1;i<=n;i++) cin >> v[i];
        vector<ll> sum(n+1);
        for(ll i=1;i<=n;i++){
            sum[i]+=sum[i-1] + (v[i]==1 ? 2 : 1);
            v[i]+=v[i-1];
        }
        // deb(sum);
        // deb(v);
        while(q--){
            ll l,r;cin >> l >> r;
            if(l==r) cout << "NO" << el;
            else if(sum[r]-sum[l-1] <= v[r] - v[l-1]){
                cout << "YES" << el;
            }
            else cout << "NO" << el;
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