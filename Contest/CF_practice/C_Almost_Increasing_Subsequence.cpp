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
        ll n,q;cin >> n >> q;
        vector<ll> v(n);
        vector<ll> pre(n);
        ll k=1;
        for(ll i=0;i<n;i++){
             cin >> v[i];
             if(i>1){
                if(v[i-2]>=v[i-1] && v[i-1]>=v[i]) pre[i]=k;
                else  pre[i]=++k;
             }
             else pre[i]=i;
        }
        // deb(pre);
        while(q--){
            ll l,r;cin >> l >> r;
            ll x=pre[r-1]-pre[l-1] +1;
            if(r>l && pre[l-1]==pre[l]) cout << x+1 << endl;
            else cout << x << endl;
        }

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}