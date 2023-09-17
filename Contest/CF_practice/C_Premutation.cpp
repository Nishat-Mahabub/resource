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
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){for(ll i=0;i<vec.size();i++){
cout << vec[i] << " ";}cout << endl;}void print(ll x){cout << x << endl;}
void print(char x){cout << x << endl;}void print(string &x){cout << x << endl;}
//===================== Main problem Code starts from here =======================//
void solve(){
        ll n;cin >> n;
        vector<ll> v[n];
        map<ll,ll> mp;
        for(ll j=0;j<n;j++){
            for(ll i=0;i<n-1;i++){
                ll data;cin >> data;
                v[j].push_back(data);
                if(i==0) mp[data]++;
            }
        }
        ll data;
        for(auto x:mp) if(x.second>1) data=x.first;
        for(ll i=0;i<n;i++){
            if(v[i][0]!=data){
                cout << data << " ";
                for(auto x:v[i]) cout << x << " " ;
                cout << endl;
                break;
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