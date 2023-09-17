#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
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
        ll n,k;cin >> n >> k;
        vector<ll> vt(n),vt_tmp(n);
        vector<ll> vf(n),vf_tmp(n);
        for(ll i=0;i<n;i++){
             cin >> vf[i];
            //  cin >> vf_tmp[i];
        }
        for(ll i=0;i<n;i++){
             cin >> vt[i];
            //  cin >> vf_tmp[i];
        }
        vf_tmp=vf;
        vt_tmp=vt;
        sort(vf_tmp.begin(),vf_tmp.end());
        sort(vt_tmp.begin(),vt_tmp.end());
        map<ll,vector<ll> > mp;
        for(ll i=0;i<n;i++){
            mp[vf_tmp[i]].push_back(i);
        }
        for(ll i=0;i<n;i++){
            cout << vt_tmp[mp[vf[i]].back()] << " ";
            mp[vf[i]].pop_back();
        }
        cout << endl;
// 1 3 5 3 9
// 2 4 5 2 11 


}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}