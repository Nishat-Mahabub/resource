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
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//
void solve(){
        ll v,e;cin >> v >> e;
        map<ll,ll> mpf;
        map<ll,ll> mps;
        for(ll i=0;i<2*e;i++){
            ll data;cin >> data;
            mpf[data]++;
        }
        for(auto x:mpf){
            mps[x.second]++;
        }
        vector<ll> count;
        for(auto x:mps) count.push_back(x.second);
        sort(all(count));
        ll n=count.size();
        if(n==2){
            cout << (count[0]-1) << " "  <<  count[1]/(count[0]-1) << endl; 
        }
        else {
            cout << count[1] << " " << count[2]/(count[1]) << endl; 
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