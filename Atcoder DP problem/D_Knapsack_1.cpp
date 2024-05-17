#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(2e5 +1)
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

ll cache[101][100001];

ll max_profit(vector<ll> &weight,vector<ll> &profit,ll w,ll ind){
    if(w<=0 || ind<=0) return 0;
    if(cache[ind][w]!=-1) return cache[ind][w];
    if(w-weight[ind-1]>=0) return cache[ind][w] = max(profit[ind-1] + max_profit(weight,profit,w-weight[ind-1],ind-1),
     max_profit(weight,profit,w,ind-1));
    return cache[ind][w]=  max_profit(weight,profit,w,ind-1);
}

void solve(){
        ll n,w;cin >> n >> w;
        vector<ll> weight(n),profit(n);
        for(int i=0;i<n;i++){
            ll a,b;cin >> a >> b;
            weight[i] = a;
            profit[i] = b;
        }
        // memset(cache,-1,sizeof(cache));
        // cout << max_profit(weight,profit,w,n) << el;
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=w;j++){
                if(j==0 || i==0) cache[i][j] = 0;
                else if(j-weight[i-1]>=0) cache[i][j] =  max(profit[i-1] + cache[i-1][j-weight[i-1]],cache[i-1][j]);
                else cache[i][j] = cache[i-1][j];
            }
        }
        cout << cache[n][w] << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}