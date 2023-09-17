#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
const ll n=2e5;
vector<vector<ll>> graph(n+1);
vector<bool> visited(n+1,false);

ll dfs(ll node,ll friend_circle=0 ){
    if(visited[node]) return friend_circle;
    friend_circle++;
    visited[node]=true;
    for(auto &x:graph[node]){
        if(visited[x]) continue;
        friend_circle = dfs(x,friend_circle);
    }
    // cout << "THis" << " ";
    return friend_circle;
}

void solve(){
        ll n,m;cin >> n >> m;
        while(m--){
            ll u,v;cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        ll ans=LLONG_MIN;
        for(ll i=1;i<=n;i++){
            ans=max(ans,dfs(i));
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}