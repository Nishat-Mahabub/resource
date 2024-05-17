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
        set<ll> s;
        for(ll i=0;i<n;i++) {
            ll in;cin >> in;
            s.insert(in);
        }
        ll ans =1;
        for(auto it=s.begin();it!=s.end();it++){
            auto iit = it;
            ll ind = distance(upper_bound(s.begin(),s.end(),(*iit)+n-1),iit);
            ans=max(ans,ind);
            // cout << it << el;
            // cout << ind << el;
        }
        // vector<ll> v;
        // for(auto x:s){
        //     v.push_back(x);
        // }
        // for(ll i=0;i<v.size();i++){
        //     ll ind = upper_bound(v.begin(),v.end(),v[i]+n-1) - v.begin() - i;
        //     ans = max(ans,ind);
        // }
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