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
        set<ll> st;
        vector<map<int,int>> v(n);
        for(ll i=0;i<n;i++){
            ll k;cin >> k;
            for(ll j=0;j<k;j++){
                ll data;cin >> data;
                v[i][data]++;
                st.insert(data);
            }
        }
        ll ans=0;
        for(auto x:st){
            set<ll> s;
            for(ll j=0;j<n;j++){
                if(v[j].find(x)==v[j].end()) {
                    for(auto [d,f]:v[j]) s.insert(d);
                }
            }
            if(s.size()!=st.size()){
                ans = max(ans,(ll)s.size());
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