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
ll cache[100001];
ll jump(vector<ll> &h,ll k,ll ind){
    if(ind<=0) return 0;
    if(cache[ind]!=-1) return cache[ind];
    ll mn = INT_MAX;
    for(int i=1;i<=k;i++){
       if(ind-i>=0) mn = min(mn,abs(h[ind]-h[ind-i]) + jump(h,k,ind-i) );
    }
    return cache[ind] =  mn;
}

void solve(){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        // memset(cache,-1,sizeof(cache));
        // cout << jump(v,k,n-1) << el;
        for(int i=0;i<n;i++){
            if(i==0) cache[0] = 0;
            else{
                ll mn = INT_MAX;
                for(int j=1;j<=k;j++){
                    if(i-j>=0) mn = min(mn,abs(v[i]-v[i-j]) + cache[i-j]);
                }
                cache[i] = mn;
            }
        }
        cout << cache[n-1] << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}