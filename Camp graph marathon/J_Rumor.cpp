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
#define ppl pair<ll,pair<ll,ll>>
#define vl vector<ll> 
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//

ll mn;
vl nums,vis;
vl graph[N];

void dfs(ll node){
    mn=min(mn,nums[node]);
    vis[node]=1;
    for(auto x: graph[node]){
        if(!vis[x]) dfs(x);
    }
}


void solve(){
        ll n,p;
        cin >> n >> p;
        nums.resize(n+1);
        vis.resize(n+1,0);
        for(ll i=1;i<=n;i++){
            cin >> nums[i];
        }
        unordered_map<ll,ll> mp;
        for(ll i=0;i<p;i++){
            ll a,b;cin >> a >> b;
            mp[a]=1;
            mp[b]=1;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        ll ans=0;
        for(ll i=1;i<=n;i++){
            if(mp.find(i)==mp.end()) ans+=nums[i];
            else if(!vis[i]){
                mn=INT_MAX;
                dfs(i);
                ans+=mn;
            }
        }
        cout << ans << el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}