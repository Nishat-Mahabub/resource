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
        ll n;cin >> n;
        vector<ll> v(n+1);
        for(ll i=0;i<n;i++) cin >> v[i];
        for(ll i=n-1;i>=0;i--) v[i]+=v[i+1];
        vector<ll> tmp;
        ll prev=n;
        for(ll i=n-1;i>=0;i--){
            if(v[i]<0) continue;
            else{
                 tmp.push_back(v[i]-v[prev]);
                 prev=i;
            }
        }
        if(v[0]<0) tmp.push_back(v[0]-v[prev]);
        ll len = tmp.size();
        ll ans=0;
        for(ll i=0;i<tmp.size();i++){
            ans += tmp[i]*(len-i);
        }
        cout << ans  << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}