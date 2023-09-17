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

ll ans;
vector<pair<ll,ll>> graph[N];
vector<bool> visited;

void dfs(ll x,ll pr,ll mx){
    ans=max(ans,mx);
    visited[x]=1;
    for(auto d:graph[x]){
        if(!visited[d.first]){
            if(d.second<pr) dfs(d.first,d.second,mx+1);
            else dfs(d.first,d.second,mx);
        }
    }
}

void solve(){
        ll n;cin >> n;
        visited.resize(n+1,0);
        ans=0;
        for(ll i=0;i<n-1;i++){
            ll u,v;cin >> u >> v;
            graph[u].push_back({v,i+1});
            graph[v].push_back({u,i+1});
        }
        dfs(1,1,1);
        for(ll i=1;i<=n;i++) graph[i].clear();
        visited.clear();
        cout <<  ans << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}