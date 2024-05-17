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
        ll n,k;cin >> n >> k;
        map<ll,ll> m;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            m[data]++;
        }
        vector<ll> v;
        for(auto [x,f]:m) if(f>=k) v.push_back(x);
        int ct=0;
        vector<ll> tmp;
        pair<ll,ll> ans;
        // deb(v);
        for(int i=0;i<v.size();i++){
            if(tmp.size()==0 || (tmp.size()>0 && tmp.back()+1==v[i])) tmp.push_back(v[i]);
            else{
                if(tmp.size()>ct){
                    ct=tmp.size();
                    ans = {tmp.front(),tmp.back()};
                }
                tmp.resize(0);
                tmp.push_back(v[i]);
            }
        }
        if(tmp.size()>ct){
                    ct=tmp.size();
                    ans = {tmp.front(),tmp.back()};
                    tmp.resize(0);
        }
        if(ct==0) cout << -1 << el;
        else cout << ans.first << " " << ans.second << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}