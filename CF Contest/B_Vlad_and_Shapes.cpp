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
        string s[n];
        for(ll i=0;i<n;i++) cin >> s[i];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(s[i][j]=='1'){
                    ll ct1=0,ct2=0;
                    ll ii=i;
                    while(i<n) ct1+=s[i++][j]=='1';
                    while(j<n) ct2+=s[ii][j++]=='1';
                    if(ct1==ct2){
                        cout << "SQUARE" << el;
                    }
                    else {
                        cout << "TRIANGLE" << el;
                    }
                    return;
                }
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