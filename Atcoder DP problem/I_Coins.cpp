#include <bits/stdc++.h>
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
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";} cout << endl;}
void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}
void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
double cache[3000][1500];
double dp(vector<double> &v,ll ind,ll rest){
    if(ind<=0) {
        return 1;
    }
    if(cache[ind][rest]!=-1) return cache[ind][rest];
    if(rest>0){
        return cache[ind][rest]=(1-v[ind-1])*dp(v,ind-1,rest-1) + (v[ind-1])*dp(v,ind-1,rest) ;
    }
    return cache[ind][rest]=v[ind-1]*dp(v,ind-1,rest) ;
}

void solve(){
    ll n;cin >> n;
    vector<double> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    // memset(cache,-1,sizeof(cache));
    for(int i=0;i<3000;i++){
        for(int j=0;j<1500;j++) cache[i][j] = -1;
    }
    cout << setprecision(10) <<dp(v,n,(n-1)/2) << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}