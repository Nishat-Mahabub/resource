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
        ll n,m,k;cin >> n >> m >> k;
        vector<ll> a(n);
        vector<ll> b(m);
        ll count=0;
        map<ll,ll> mp,mp2;
        ll res=0;
        for(ll i=0;i<n;i++) {
            cin >> a[i];
        }
        for(ll i=0;i<m;i++) {
            cin >> b[i];
            mp[b[i]]++;
        }
        for(ll i=0;i<m;i++){
            mp2[a[i]]++;
            if(mp2[a[i]]<=mp[a[i]]) count++;
        }
        ll right = m;
        ll left = 0;
        if(count>=k) res++;
        while(right<n){
            // if(count>=k) res++;
            if(++mp2[a[right]]<=mp[a[right]]) count++;
            if(--mp2[a[left]]<mp[a[left]]) count--;
            left++,right++;
            if(count>=k) res++;
            // deb(count);
        }
        cout << res << el;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}