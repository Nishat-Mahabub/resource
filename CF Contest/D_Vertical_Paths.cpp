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
ll ct=0;

void dfs(ll cur,vector<ll> adj[],vector<ll> ans[]){
    ans[ct].push_back(cur);
    for(int i=0;i<adj[cur].size();i++){
        if(i>0) ct++;
        dfs(adj[cur][i],adj,ans);
    }
}

void solve(){
        ll n;cin >> n;
        ll root;
        vector<ll> adj[n+1];
        vector<ll> ans[n+1];
        ct=0;
        for(ll i=1;i<=n;i++){
            ll data;cin >> data;
            if(data!=i) adj[data].push_back(i);
            else root=data;
        }
        dfs(root,adj,ans);
        cout << ct+1 << el;
        for(int i=0;i<=ct;i++){
            cout << ans[i].size() << endl;
            for(auto x:ans[i]) cout << x << " " ;
            cout << el;
        }
        cout << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}