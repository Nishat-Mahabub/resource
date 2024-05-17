#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll unsigned int
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
void print(vl &vec){for(ll i=0;i<vec.
();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n;cin >> n;
        map<ll,ll> m;
        ll data;
         for(ll i=0;i<n;i++){
            cin >> data;
            m[data]++;
        }
        ll ans=n;
        for(auto [d,x]:m){
            ll i = d^((1<<31)-1);
            // deb(d);
            // deb(i);
            if(m[d]>0 && m.find(i)!=m.end()){
                ll mn = min(m[i],m[d]);
                ans-=mn;
                m[i]-=mn;
                m[d]-=mn;
            }
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