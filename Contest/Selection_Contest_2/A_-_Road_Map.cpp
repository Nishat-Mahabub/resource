#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,m;cin >> n >> m;
        vector<string> t(n);
        map<string,ll> mp;
        for(ll i=0;i<n;i++){
            cin >> t[i];
        }
        for(ll i=0;i<m;i++){
            string s;cin >> s;
            mp[s]++;
        }
        for(ll i=0;i<n;i++){
            if(mp.find(t[i])!=mp.end()){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}