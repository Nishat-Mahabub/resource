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
ll n,e;
vector<ll> graph[N];
vector<ll> visited(N,0);
vector<ll> path(N,0);
stack<ll> st;
//cycle detection...

bool dfs_cycle(ll node){
    visited[node]=1;
    path[node]=1;
    for(auto x:graph[node]){
        if(!visited[x]) {
            if(dfs_cycle(x)) return true;
        }
        else if(path[x]) return true;
    }
    st.push(node);
    path[node]=0;
    return false;
}

void solve(){
        cin >> n >> e;
        for(ll i=0;i<e;i++){
            ll a ,b;cin >> a >> b;
            graph[a].push_back(b);
        }
        for(ll i=1;i<=n;i++){
            if(!visited[i]){
                if(dfs_cycle(i)){
                    cout << "IMPOSSIBLE" << endl;
                    return;
                }
            }
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}