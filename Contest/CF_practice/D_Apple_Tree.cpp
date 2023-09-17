#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//


 void dfs(int node,vector<vector<ll>> &adj,vector<bool> &vis,vector<ll> &ways){
    // if(vis[node])
    //     return;
    vis[node] = true;
    for(auto x:adj[node]){
        if(!vis[x]){
            dfs(x, adj, vis, ways);
            ways[node]+= ways[x];
        }
    }
}


void solve(){
    ll n;
    cin >> n;
    ll x, y;
    vector<vector<ll>> adj(n + 1);
    vector<bool> vis(n + 1);
    vector<ll> ways(n + 1);

    for (ll i = 0; i < n - 1;i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (ll i = 2; i <= n;i++){
        if(adj[i].size()==1)
            ways[i] = 1;
    }
    dfs(1, adj, vis, ways);

    ll q;
    cin >> q;
    while(q--){
        cin >> x >> y;
        cout << ways[x] * ways[y] << endl;
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