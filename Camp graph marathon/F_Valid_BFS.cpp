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
void solve(){
        ll n;
        cin >> n;
        vl graph[n+1];
        for(ll i=0;i<n-1;i++){
            ll u,v;cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vl bfs(n);
        for(ll i=0;i<n;i++) cin >> bfs[i];
        vl v;
        vl len;
        len.push_back(1);
        queue<ll> q;
        vl vis(n+1,0);
        ll ct=0;
        q.push(bfs[0]);
        for(q.push(0);!q.empty();q.pop()){
            ll cur=q.front();
            if(cur==0 ){
                if(ct) len.push_back(ct);
                ct=0;
                if(q.size()==1) break;
                q.push(0);

                continue;
            }
            vis[cur]=1;
            v.push_back(cur);
            for(auto x:graph[cur]){
                if(!vis[x]) q.push(x),ct++;
            }
        }
        // deb(v);
        // deb(bfs);
        for(ll i=1;i<len.size();i++){
            len[i]+=len[i-1];
        }
        // deb(len);
        if(v.size()!=n) {
            cout << "No" << el;
            return;
        }
        else{
            set<ll> stb,stv;
            ll k=0;
            for(ll i=0;i<len.size();i++){
                while(k<len[i]){
                    stb.insert(bfs[k]);
                    stv.insert(v[k]);
                    k++;
                }
                if(stb!=stv) {
                    cout << "No" << el;
                    return;
                }
            }
        // for(auto x:stv) cout << x << " ";
        }
        cout << "Yes" << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}