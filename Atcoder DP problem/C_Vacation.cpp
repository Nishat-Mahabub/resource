#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
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
vector<ll> v[100001];
ll cache[100001][3];
ll max_profit(ll ind,ll prev){
    if(ind<0) return 0;
    if(cache[ind][prev+1]!=-1) return cache[ind][prev+1];
    ll mx = INT_MIN;
    for(ll i=0;i<3;i++){
        if(i!=prev){
            mx = max(mx,v[ind][i] + max_profit(ind-1,i));
        }
    }
    return cache[ind][prev+1] = mx;
}

void solve(){
        ll n;cin >> n;
        for(ll i=0;i<n;i++) {
            ll a,b,c;cin >> a >> b >> c;
            v[i].push_back(a);
            v[i].push_back(b);
            v[i].push_back(c);
        }
        memset(cache,-1,sizeof(cache));
        // ll res = INT_MIN;
        // for(ll i=0;i<3;i++) res=max(res,max_profit(n-1,i))
        cout << max_profit(n-1,-1);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}