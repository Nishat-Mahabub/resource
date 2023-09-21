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

void solve(ll n){
        ll e;cin >> e;
        vl graph[n];
        unordered_map<ll,ll> mp;
        for(ll i=0;i<e;i++){
            ll a,b;cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
            mp[a]++;
            mp[b]++;
        }
        // for(auto x:graph){
        //     for(auto y:x) cout << y << " ";
        //     cout << el;
        // }
        vl color(n,-1);
        queue<ll> q;
        for(ll i=0;i<n;i++){
            if(mp.find(i)!=mp.end()){
                // deb(i);
                color[i]=1;
                for(q.push(i);!q.empty();q.pop()){
                    ll cur=q.front();
                    for(auto x:graph[cur]){
                        if(color[x]==-1){
                            color[x]=1-color[cur];
                            q.push(x);
                        }
                        else if(color[x]==color[cur]){
                                // deb(x);
                                cout << "NOT BICOLORABLE." << el;
                            return;
                        }
                    }
                }
                break;
            }
        }
        cout << "BICOLORABLE." << el;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t){
        ll n;cin >> n;
        if(n==0) return 0;
        solve(n);
    }
    return 0;
}