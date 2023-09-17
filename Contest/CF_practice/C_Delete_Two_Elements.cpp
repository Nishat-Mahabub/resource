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
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        ll sum=0;
        unordered_map<ll,vector<ll>> mp;
        for(ll i=0;i<n;i++) {
            cin >> v[i];
            mp[v[i]].push_back(i);
            sum+=v[i];
        }
        double k=2*(sum/(double)n);
        // cout << k << endl;
        if(k!=ceil(k)){
            cout << 0 << endl;
            return;
        }
        ll count=0;
        for(ll i=0;i<n;i++){
            if(mp.find(k-v[i])!=mp.end()){
               count+=mp[k-v[i]].end()-upper_bound(mp[k-v[i]].begin(),mp[k-v[i]].end(),i);
            }
        }
        cout << count << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}