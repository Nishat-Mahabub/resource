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
void solve(){
        ll n;cin >> n;
        ll x;cin >> x;
        vector<int> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        int mem[n+1][x+1];
        for(int j=0;j<=x;j++) mem[0][j]=INT_MAX-1;
        for(int i=1;i<=n;i++) mem[i][0]=0;
        for(int j=1;j<=x;j++){
            if(j%v[0]==0) mem[1][j]=j/v[0];
            else mem[1][j]=INT_MAX -1;
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=x;j++){
                if(v[i-1]<=j) mem[i][j] = min(1+mem[i][j-v[i-1]],mem[i-1][j]);
                else mem[i][j] = mem[i-1][j];
            }
        }
        cout << (mem[n][x]==INT_MAX-1 ? -1 : mem[n][x] )<< el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}