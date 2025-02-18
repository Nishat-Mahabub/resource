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
        ll n,m;cin >>n >> m;
        vector<ll> a(n),c(m);
        for(ll i=0;i<n;i++) cin >> a[i];
        for(ll i=0;i<m;i++) cin >> c[i];
        sort(a.begin(),a.end());
        sort(c.begin(),c.end());
        
        vector<ll> v1(n),v2(n);
        ll ans=0;
        for(ll i=0,j=m-1;i<n;i++,j--){
            v1[i]=abs(a[i]-c[j]);
        }
        for(ll i=0,j=n-1;i<n;i++,j--){
            v2[i]=abs(a[i]-c[j]);
        }
        for(ll i=0;i<n;i++){
            ans+=max(v1[i],v2[i]);
        }
        cout << ans << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}