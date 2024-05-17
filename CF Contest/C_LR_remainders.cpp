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
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        string s;cin >> s;
        ll left=0;
        ll right=n-1;
        for(ll i=0;i<n;i++){
            if(left==right) break;
            if(s[i]=='L') left++;
            else right--;
        }
        vector<ll> res(n);
        ll ans=v[left]%m;
        res[n-1] = ans;
        for(ll i=n-2;i>=0;i--){
            if(s[i]=='L') ans =  (ans*v[--left])%m;
            else ans =  (ans*v[++right])%m;
            res[i] = ans;
        }
        for(auto x:res) cout << x << " ";
        cout << el;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}