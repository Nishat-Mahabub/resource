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
#define vvl vector<vector<ll>> 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//

vvl edges;
vl dis(N,INT_MIN);
void solve(){
        ll n,e;cin >> n >> e;
        ll neg_edge=0;
        ll w=-1;
        for(ll i=1;i<=e;i++){
            ll a ,b ,c;
            cin >> a  >> b >> c;
            edges.push_back({a,b,c});
        }
        dis[1]=0;
        for(ll i=1;i<n;i++){
            for(ll i=0;i<e;i++){
                if(dis[edges[i][0]]!=INT_MIN && dis[edges[i][0]]+ edges[i][2] > dis[edges[i][1]]){
                    dis[edges[i][1]]=dis[edges[i][0]]+ edges[i][2];
                }
            }
        }
        for(ll i=0;i<e;i++){
                if(dis[edges[i][0]]!=INT_MIN && dis[edges[i][0]]+ edges[i][2] > dis[edges[i][1]]){
                    cout << -1 << el;
                    return;
                }
        }
        cout << dis[n] << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}