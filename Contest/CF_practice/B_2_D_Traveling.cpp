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
        ll n,k,a,b;cin >> n >> k >> a >> b;
        vpl c(n+1);
        for(ll i=1;i<=n;i++){
            cin >> c[i].f >> c[i].s ;
        }
        ll ans=abs(c[a].f-c[b].f) + abs(c[a].s-c[b].s) ;
        ll mn1=1e15,mn2=1e15;
        for(ll i=1;i<=k;i++){
            mn1=min(mn1,abs(c[a].f-c[i].f) + abs(c[a].s-c[i].s));
            mn2=min(mn2,abs(c[b].f-c[i].f) + abs(c[b].s-c[i].s));
        }
        cout << min(ans,mn1+mn2) << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}