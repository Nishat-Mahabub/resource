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

ll func(ll x){
    ll res=1;
    for(int i=2;i<=x;i++) res=(res*i)%998244353;
    return res;
}

void solve(){
        string s;
        cin >> s;
        ll n = s.size();
        ll ans=1;
        ll block=0;
        for(ll i=0;i<n;i++){
            ll ct=1;
            while(i<n-1 && s[i]==s[i+1]) ct++,i++;
            ans = (ans*ct)%998244353;
            block++;
        }
        cout << n-block << " " << (ans*func(n-block))%998244353 << el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}