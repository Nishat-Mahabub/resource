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
vector<ll> team(N+1,-1);
ll n,e;        bool possible=true;
vector<ll> vis(N,0);

void bfs(){
        queue<ll> que;
        for(ll i=1;i<=n;i++){
            if(team[i]==-1){
                team[i]=0;
                for(que.push(i);!que.empty();que.pop()){
                    ll cur=que.front();
                    for(auto x:graph[cur]){
                        if(team[x]==-1){
                             team[x]=1-team[cur];
                             que.push(x);
                        }
                        else if(team[x]==team[cur]) {
                            possible=false;
                            return;
                        }
                    }
                // deb(team);
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
        if(possible){
            for(ll i=1;i<=n;i++) cout << team[i]+1 << " ";
            cout << endl;
        }
        else cout << "IMPOSSIBLE" << endl;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}