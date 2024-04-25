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
void solve(){
        ll n,e,s,t;cin >> n >> e >> s >> t;
        vector<pair<ll,ll>> graph[n+1];
        vector<ll> distance(n+1,INT64_MAX);
        distance[s]=0;
        for(ll i=0;i<e;i++){
            ll a,b,c;cin >> a >> b >> c;
            graph[a].push_back({c,b});
            graph[b].push_back({c,a});
            // graph[b].push_back({c,a});
        }
        // priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>> > pq;
        set<pair<ll,ll> > pq;
        for(pq.insert({0,s});!pq.empty();){
            auto it=pq.begin();
            ll dis=(*it).first;
            ll cur=(*it).second;
            pq.erase(it);
            for(auto x:graph[cur]){
                if(x.first+dis < distance[x.second]){
                    if(distance[x.second]!=INT64_MAX){
                        pq.erase({distance[x.second],x.second});
                    }
                    distance[x.second]=x.first+dis;
                    pq.insert({distance[x.second],x.second});
                }
            }
            // deb(distance);
        }

        if(distance[t]==INT64_MAX) cout << "unreachable" << endl;
        else cout << distance[t] << endl;
 
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;cin >> t;
    ll tc=1;
    while(t--){
        cout << "Case #" << tc++ <<": ";
        solve();
    }
    return 0;
}