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
        vector<ll> ans(n),mn(n);
        for(ll i=0;i<n;i++){
            ll m;cin >> m;
            vector<ll> tmp(m);
            for(ll j=0;j<m;j++) cin >> tmp[j];
            auto it=min_element(all(tmp));
            mn[i]=*it;
            tmp.erase(it);
            ans[i]=*min_element(all(tmp));
        }
        // deb(ans);
        // deb(mn);
        ll sum=0;
        sort(allr(ans));
        ans.pop_back();
        sort(all(mn));
        for(auto x:ans) sum+=x;
        sum+=mn[0];
        cout << sum << endl;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}