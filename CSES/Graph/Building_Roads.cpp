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
//    　　　　　＿＿
// 　　　　　／＞　 フ
// 　　　　　| _　 _ |
// 　 　　　／ミ _x ノ
// 　　 　 /　　　 　|
// 　　　 /　 ヽ　　 ﾉ
// 　 　 │　　|　|　|
// 　／￣|　　 |　|　|
// 　| (￣ヽ＿_ヽ_)__)
// 　＼二つ
//===================== Main problem Code starts from here =======================//
vector<ll> graph[N];
vector<ll> visited(N,0);
vector<ll> city;

void dfs(ll cur){
    visited[cur]=1;
    for(auto node:graph[cur]){
        if(!visited[node]) dfs(node);
    }
}

void solve(){
        ll n,e;cin >> n >> e;
        for(ll i=0;i<e;i++){
            ll a,b;cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        for(ll i=1;i<=n;i++){
            if(!visited[i]){
                city.push_back(i);
                dfs(i);
            }
        }
        cout << city.size()-1 << endl;
        for(ll i=0;i<city.size()-1;i++){
            cout << city[i] << " " << city[i+1] << endl;
        }

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}