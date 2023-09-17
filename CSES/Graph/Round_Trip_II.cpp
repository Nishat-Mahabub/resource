#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(1e5 +1)
#define f first
#define s second
#define pb push_back
#define el '\n'
#define vl vector<ll> 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//

vl graph[N];
vl visited(N,0);
vl path(N,0);
vl ans;

bool dfs(ll cur){
    visited[cur]=1;
    path[cur]=1;
    ans.pb(cur);
    // deb(cur);
    for(auto x:graph[cur]){
        if(!visited[x]){
            if(dfs(x)) return true;
        }
        else if(path[x]) {
            ans.pb(x);
            return true;
        }
    }
    path[cur]=0;
    ans.pop_back();
    return false;
}

void solve(){
        ll n,e;cin >> n >> e;
        for(ll i=0;i<e;i++){
            ll a ,b;cin >> a >> b;
            graph[a].pb(b);
        }
        for(ll i=1;i<=n;i++){
            if(!visited[i]){
                // deb(i);
                if(dfs(i)){
                    reverse(all(ans));
                    while(ans[0]!=ans[ans.size()-1]) ans.pop_back();
                    reverse(all(ans));
                    cout << ans.size() << el;
                    for(auto x:ans) cout << x << " ";
                    cout <<  el;
                    return;
                }
            }
        }
        cout << "IMPOSSIBLE" << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}