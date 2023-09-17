#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define all(v)  v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define N (ll)(1e6 +1)
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
    ll n;cin >> n;
    vl val(N);
    ll data;
    ll mx=INT_MIN;
    for(ll i=0;i<n;i++){
        cin >> data;
        val[data]++;
        mx=max(mx,data);
    }
    for(ll i=mx;i>0;i--){
        ll divisor_freq=0;
        for(ll j=i;j<=mx;j+=i) divisor_freq+=val[j];
        if(divisor_freq>=2){
            cout << i << el;
            return;
        }
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