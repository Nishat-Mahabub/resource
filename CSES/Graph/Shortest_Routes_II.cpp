#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(5e2 +1)
#define f first
#define s second
#define pb push_back
#define el '\n'
#define vl vector<ll> 
#define vvl vector<vector<ll> > 
#define vpl vector<pair<ll,ll>>
#define mod (ll)(1e9+7)
void print(vl &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n,e,q;cin >> n >> e  >> q;
        vvl matrix(N,vl(N,1e14));
        for(ll i=1;i<=e;i++){
            ll a ,b,c;cin >> a >> b >> c;
            matrix[a][b]=min(matrix[a][b],c);
            matrix[b][a]=min(matrix[b][a],c);
            // matrix[a][b]=c;
            // matrix[b][a]=c;
        }
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++) if(i==j) matrix[i][j]=0;
        }
        for(ll k=1;k<=n;k++){
            for(ll i=1;i<=n;i++){
                for(ll j=1;j<=n;j++){
                    matrix[i][j]=min(matrix[i][k]+matrix[k][j],matrix[i][j]);
                }
            }
        }
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                if(matrix[i][j]==1e14) matrix[i][j]=-1;
            }
        }
        while(q--){
            ll i,j;cin >> i >> j;
            cout << matrix[i][j] << endl;
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