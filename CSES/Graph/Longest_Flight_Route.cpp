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
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
vl graph[N];
vl visited(N,0);
vl path;

void dfs(ll node,vl &tmp){
        visited[node]=1;
        for(auto x:graph[node]){
            if(!visited[x]) dfs(x,tmp);
        }
        
}

void solve(){
        ll n,e;cin >> n >> e;
        for(ll i=0;i<e;i++){
            ll a,b;cin >> a >> b;
            graph[a].push_back(b);
        }
        dfs(1);
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}