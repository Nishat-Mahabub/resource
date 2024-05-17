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
        vector<ll> v(n+1);
        for(ll i=1;i<=n;i++) cin >> v[i];
        vector<ll> left(n+1);
        // deb(v);
        left[1]=1;
        left[0]=0;
        for(ll i=2;i<n;i++){
            if(v[i]-v[i-1] > v[i+1] - v[i]) left[i] = 1;
            else  left[i] =  v[i+1] - v[i];
        }
        // reverse(v.begin(),v.end());
        vector<ll> right(n+2);
        right[n]=1;
        right[n+1]=0;
        for(ll i=n-1;i>0;i--){
            if(v[i]-v[i-1] < v[i+1] - v[i]) right[i] = 1;
            else right[i] = v[i]-v[i-1];
        }
        // deb(left);
        // deb(right);
        for(ll i=1;i<=n;i++){
            left[i]+=left[i-1];
        }
        for(ll i=n;i>0;i--){
            right[i]+=right[i+1];
        }
        // deb(left);
        // deb(right);
        ll q;cin >> q;
        while(q--){
            ll a,b;cin >> a >> b;
            if(a<b){
                cout << left[b-1] - left[a-1] << el; 
            }
            else{
                cout << right[b+1] - right[a+1] << el;
            }
        }

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}