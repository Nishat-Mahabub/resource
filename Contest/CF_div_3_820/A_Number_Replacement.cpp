#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        map<ll,set<char>> mp; 
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        string s;
        cin >> s;
        for(ll i=0;i<s.size();i++){
            mp[v[i]].insert(s[i]);
        }
        for(auto x:mp){
            if(x.second.size()>1){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}