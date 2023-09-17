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
bool fg=false;
string path;
string ans;
ll mn=INT_MAX;
void dfs(ll i,ll j,ll n,ll m){
        
        if(s[i][j]=='#') return;
        // cout << path << endl;
        if(s[i][j]=='B') {
            fg=true;
            if(path.size()<mn){
                ans=path;
                mn=ans.size();
            }
            // ans=path;
            // cout << ans << endl;
            return;
        }
        s[i][j]='#';
        if(j<m-1 && (s[i][j+1]=='.' || s[i][j+1]=='B')){
            path.push_back('R');
            // s[i][j+1]='#';
            dfs(i,j+1,n,m);
            s[i][j+1]='.';
            path.pop_back();
        }
        if(i>0 && (s[i-1][j]=='.' || s[i-1][j]=='B')){
            path.push_back('U');
            // s[i-1][j]='#';
            dfs(i-1,j,n,m);
            s[i-1][j]='.';
            path.pop_back();
        }
        if(i<n-1 && (s[i+1][j]=='.' || s[i+1][j]=='B')){
            path.push_back('D');
            // s[i+1][j]='#';
            dfs(i+1,j,n,m);
            s[i+1][j]='.';
            path.pop_back();
        }
        if(j>0 && (s[i][j-1]=='.' || s[i][j-1]=='B')){
            path.push_back('L');
            // s[i][j-1]='#';
            dfs(i,j-1,n,m);
            s[i][j-1]='.';
            path.pop_back();
        }
        
}

void solve(){
        ll n,m;cin >> n >> m;
        for(ll i=0;i<n;i++) cin >> s[i];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(s[i][j]=='A') {
                    dfs(i,j,n,m);
                    break;
                }
            }
        }
        if(fg) cout << "YES" << endl << ans.size() << endl <<  ans << endl;
        else cout << "NO" << endl;
        // cout << path << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}