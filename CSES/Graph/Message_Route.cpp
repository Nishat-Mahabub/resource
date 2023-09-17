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
#define vl vector<ll> 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
vector<ll> graph[N];
vector<ll> visited(N,0);
vector<ll> path(N);
ll n,e;

void bfs(){
    queue<ll> q;
        for(q.push(1);!q.empty();q.pop()){
            ll cur=q.front();
            visited[cur]=1;
            for(auto x:graph[cur]){
                if(!visited[x]){
                    path[x]=cur;
                    visited[x]=1;
                    q.push(x);
                    if(x==n) return;
                }
            }
        }
}

void solve(){
        cin >> n >> e;
        for(ll i=0;i<e;i++){
            ll a,b;cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        bfs();

        if(!visited[n]) cout << "IMPOSSIBLE" << endl;
        else {
            vl ans;
            ans.push_back(n);
            while(path[ans[ans.size()-1]]!=1){
                ans.push_back(path[ans[ans.size()-1]]);
                // deb(ans);
            }
            ans.push_back(1);
            reverse(all(ans));
            cout << ans.size() << endl;
            for(auto x:ans) cout << x << " ";
            cout << el;
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