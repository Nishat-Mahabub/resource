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
        ll n,m;cin >> n >> m;
        ll count=0;
        vector<ll> v;
        ll total=0;
        for(ll i=0;i<n;i++){
            string s;cin >> s;
            total += s.size();
            count=0;
            for(ll i=s.size()-1;i>0;i--){
                if(s[i]=='0') count++;
                else break;
            }
            v.push_back(count);
        }
        sort(v.rbegin(),v.rend());
        ll ct=0;
        for(ll i=0;i<v.size();i+=2){
            ct+=v[i];
        }
        // deb(v);
        if(total-ct>m) cout << "Sasha" << el;
        else cout << "Anna" << el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}