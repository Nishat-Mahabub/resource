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
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        if(k>=3){
            cout << 0 << el;
            return;
        }
        sort(v.begin(),v.end());
        ll mn=v[0];
        if(k==1){
            for(ll i=1;i<n;i++) mn=min(mn,v[i]-v[i-1]);
            cout << mn << el;
        }
        if(k==2){
            for(ll i=0;i<n;i++){
                for(ll j=i+1;j<n;j++){
                    ll num = v[j]-v[i];
                    mn=min(mn,num);
                    auto it = upper_bound(v.begin(),v.end(),num);
                    if(it!=v.end()) mn=min(mn,abs((*it) - num));
                    if(it!=v.begin()) it--,mn=min(mn,abs((*it) - num));
                }
            }
            cout << mn << el;
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