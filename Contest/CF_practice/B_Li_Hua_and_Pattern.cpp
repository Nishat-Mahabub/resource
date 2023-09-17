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
void solve(){
        ll n,op;cin>> n >> op;
        vector<vector<ll>> v(n,vector<ll> (n) ) ;

        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin  >> v[i][j];
            }
        }
        ll count=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(v[i][j]!=v[n-i-1][n-j-1]) count++;
            }
        }
        op-=count/2;
        cout << ((op>=0 && (op%2==0 || n&1 )) ? "YES":"NO") << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}