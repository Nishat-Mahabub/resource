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
        ll n,m;cin >> n >> m;
        vpl v(m);
        map<ll,ll> mp;
        for(ll i=0;i<m;i++){
            ll x,w;cin >> x >> w;
            v[i]={w,x};
            mp[x]=i;
        }
        sort(v.begin(),v.end());
        ll sum=0;
        vl axis;
        for(ll i=0;i<2*n;i++){
            sum+=v[i].f;
            axis.push_back(v[i].s);
        }
        sort(all(axis));
        cout << sum << el;
        for(ll i=0;i<n;i++){
            cout << mp[axis[i]] +1  << " " << mp[axis[2*n -1-i]] +1 << el;
        }
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}