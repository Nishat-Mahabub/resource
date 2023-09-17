#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(1e3 +1)
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
vector<ll> dir ={1,0,-1,0,1};
string s[N];
void dfs(ll i,ll j,ll n,ll m){
        if(i<0 || j<0 || i>=n || j>=m || s[i][j]=='#') return;
        s[i][j]='#';
        for(ll d=0;d<4;d++){
            dfs(i+dir[d],j+dir[d+1],n,m);
        }
}

void solve(){
        ll n,m;cin >> n >> m;
        for(ll i=0;i<n;i++) cin >> s[i];
        ll ans=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(s[i][j]=='.') {
                    ans++;
                    dfs(i,j,n,m);
                }
            }
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}