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
vector<ll> adj[100001];
vector<ll> cache(100001,-1);

ll dfs(ll node){
    ll mx = 0;
    if(cache[node]!=-1) return cache[node];
    for(auto child:adj[node] ){
        mx = max(mx, 1 + dfs(child));
    }
    return cache[node] = mx ;
}

void solve(){
        ll n,e;cin >> n >> e;
        for(ll i=0;i<e;i++){
            ll a,b;cin >> a >> b;
            adj[a].push_back(b);
        }
        ll res = 0;
        for(int i=1;i<=n;i++){
            res = max(res,dfs(i));
        }
        cout << res << el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}