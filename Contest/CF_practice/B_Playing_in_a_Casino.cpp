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
        int n , m;
        cin >> n >> m;
        int arr[n+2][m+2];
        for(int i=0;i < n;i++){
            for(int j=0;j < m;j++)
                cin >> arr[i][j];
        }
 
        ll ans = 0 ;
        for(int i=0;i < m;i++){
            vector<ll> v;

            sort(all(v[i][]));
            for(int i=0;i < n;i++){
                ans += ((i * v[i]) - (n-i-1) * v[i]);
            }
            deb(v);
            deb(ans);
        }
        cout << ans << "\n";
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}