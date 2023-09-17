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

bool comp(pair<ll, ll>& a,pair<ll, ll>& b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;

}


void solve(){
        ll n,k;cin >> n >> k;
        vector<pair<ll,ll> > vp(n);
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            vp[i]={data%k,i};
        }
        sort(all(vp));
        ll i=0;
        for(i=0;i<n;i++){
            if(vp[i].first==0) cout << vp[i].second +1  << " ";
            else break;
        }
        vector<pair<ll,ll>> vv;
        for(;i<n;i++){
            vv.push_back({vp[i].first,vp[i].second});
        }
        sort(vv.begin(),vv.end(),comp);
        // for(auto x:vv) cout << x.first << " " << x.second << endl;
        for(ll i=0;i<vv.size();i++) cout << vv[i].second +1 << " ";
        cout << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}