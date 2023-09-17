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
        ll n;cin >> n;
        vector<ll> v(n);
        ll mx=INT_MIN;
        for(ll i=0;i<n;i++) {
            cin >> v[i];
            mx=max(mx,v[i]);
        }
        vector<ll> a,b;
        for(ll i=0;i<n;i++){
            if(v[i]==mx) b.push_back(v[i]);
            else  a.push_back(v[i]);
        }
        if(a.size()==0 || b.size()==0) cout << -1 << endl;
        else{
            cout << a.size() << " " << b.size() << endl;
            for(auto x:a) cout << x << " ";
            cout << endl;
            for(auto x:b) cout << x << " ";
            cout << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}