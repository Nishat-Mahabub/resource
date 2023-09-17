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
        ll n,k;
        cin >> n >> k;
        map<ll, vector<ll> > mp;
        for (ll i = 0; i < n;i++){
            ll data;
            cin >> data;
            mp[data].push_back(i);
        }
        ll ans = INT_MAX;
        for(auto v:mp){
            vector<ll> x = v.second;
            vector<ll> tmp;
            for (ll i = 0; i < x.size();i++){
                if(i==x.size()-1){
                    tmp.push_back((n- x[i]-1));
                    // tmp = max(tmp, (n- x[i]-1)/2);
                }
                if(i==0){
                    // tmp = max(tmp, x[i]/2 );
                    tmp.push_back(x[i]);
                }
                else{
                    // tmp = max(tmp, (x[i] - x[i-1]-1)/2);
                    tmp.push_back((x[i] - x[i - 1] - 1));
                }
            }
            sort(tmp.begin(), tmp.end());
            // deb(tmp);
            ans = min(ans, max(tmp[tmp.size()-2],tmp[tmp.size()-1]/2));
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}