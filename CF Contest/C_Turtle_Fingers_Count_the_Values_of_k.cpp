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
        ll a,b,l;cin >> a >> b >> l;
        ll x=0,y=0;
        ll num=1;
        while(num<=l){
            x++;
            num*=a;
        }
        num=1;
        while(num<=l){
            y++;
            num*=b;
        }
        set<ll> s;
        for(ll i=0;i<=x;i++){
            for(ll j=0;j<=y;j++){
                ll ab=pow(a,i)*pow(b,j);
                if(l%ab==0){
                    s.insert(l/ab);
                }
            }
        }
        cout << s.size() << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}