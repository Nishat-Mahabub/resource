#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n,q;
        cin >> n >> q;
        vector<vector<ll> > v(n+1,vector<ll> (n+1));
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                char c;cin >> c;
                if(c=='*') v[i][j]=1;
                else v[i][j]=0;
            }
        }
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                v[i][j]+=v[i-1][j] + v[i][j-1] - v[i-1][j-1];
            }
        }
        while(q--){
            ll a,b,c,d;cin >> a >> b >> c >> d;
            cout << v[c][d] - v[c][b-1] - v[a-1][d] + v[a-1][b-1] << endl;
        }

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}