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
int vis[2][200001];
string s[2];
ll n;
bool fg;
void dfs(int i,int j){
    if(i==1 && j==n-1){
        fg=true;
        return;
    }
    // cout << i << " " << j << el; 
    if( vis[i][j]==1) return;

    vis[i][j]=1;
    int ind=1-i;
    if(j<n-1){
            vis[i][j+1]=1;
            int right_ind =  s[i][j+1]=='<' ? j-1 : j+1;
            dfs(i,right_ind+1);
    }
    if(j>0){
            vis[i][j-1]=1;
            int left_ind =  s[i][j-1]=='<' ? j-1 : j+1;
            dfs(i,left_ind-1);

    }
    vis[i][ind]=1;
    int v_ind =  s[ind][j]=='<' ? j-1 : j+1;
    dfs(ind,v_ind);
    
}

void solve(){
        cin >> n;
        cin >> s[0];
        cin >> s[1];
        memset(vis,0,sizeof(vis));
        fg=false;
        dfs(0,0);
        if(fg) cout << "YES" << el;
        else cout << "NO" << el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}