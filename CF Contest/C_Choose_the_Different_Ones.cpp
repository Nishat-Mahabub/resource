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
        ll n,m ,k;cin >> n >> m >> k;
        set<ll> s1,s2,s;
        ll data;
        for(ll i=0;i<n;i++){
            cin >> data;
            if(data<=k) s1.insert(data);
        }
        for(ll i=0;i<m;i++){
            cin >> data;
            if(data<=k) s2.insert(data);
        }
        for(auto x:s1){
            s.insert(x);
        }
        for(auto x:s2){
            s.insert(x);
        }
        if(s1.size()>=k/2 && s2.size()>=k/2 && s.size()==k) cout << "YES" << el;
        else cout << "NO" << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}