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
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//

vector<vector<ll>> v(N,vector<ll> (N));
vector<ll> dir={1,0, -1, 0 ,1};
ll sum;
ll dfs(ll n,ll m,ll i, ll j){
    if(i<0 || j<0 || i>=m || j>=n || v[i][j]==0 ) return 0;
    else{
        // sum+=v[i][j];
        sum+=v[i][j];
        v[i][j]=0;
    }
    // for(ll k=0;k<4;k++){
    //     dfs(n,m,i+dir[k],j+dir[k+1]);
    // }
    return dfs(n,m,i+1,j) + dfs(n,m,i-1,j) + dfs(n,m,i,j+1) + dfs(n,m,i,j-1);
}

void solve(){
        ll m,n;cin >> m >> n;
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                cin >> v[i][j];
            }
        }
        ll ans=0;
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                sum=0;
                if(v[i][j]!=0) ans=max(ans,dfs(n,m,i,j));
                // deb(ans);
            }
        }
        cout << ans << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}