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
        int mx=INT_MIN;
        int index;
        vector<pair<ll,ll>> vp;
        for(ll i=0;i<n;i++){
             cin >> v[i];
             if(v[i]>mx){
                index=i;
                mx=v[i];
             }
        }
        if(is_sorted(all(v))) {
            cout << 0 << endl;
            return;
        }
        for(ll i=1;i<n;i++){
            if(v[i-1]>v[i]){
                while(v[i]<v[i-1]){
                    vp.push_back({i+1,index+1});
                    v[i]+=v[index];
                    // deb(v[i]);
                }
                if(v[i]>mx){
                    index=i;
                    mx=v[i];
                }
            }
        }
        cout << vp.size() << endl;
        for(auto x:vp) cout << x.first << " " << x.second << endl;
        // cout << is_sorted(all(v)) << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}