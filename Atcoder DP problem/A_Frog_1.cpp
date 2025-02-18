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
// ll jump(vector<ll> &h,ll ind){
//     if(ind<=0) return 0;
//     if(cache[ind]!=-1) return cache[ind];
//     if(ind==1) return cache[ind] =  abs(h[0]-h[1]);
//     return cache[ind] = min(abs(h[ind] - h[ind-1]) + jump(h,ind-1),abs(h[ind] - h[ind-2]) + jump(h,ind-2));
// }

void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        // cout << jump(v,n-1) << el; 
        for(int i=0;i<n;i++){
            if(i==0) cache[i] = 0;
            else if(i==1) cache[i] = abs(v[0]-v[1]);
            else cache[i] = min( abs(v[i]-v[i-1]) + cache[i-1], abs(v[i]-v[i-2]) + cache[i-2]);
        }
        cout << cache[n-1] << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    memset(cache,-1,sizeof(cache));
    while(t--){
        solve();
    }
    return 0;
}