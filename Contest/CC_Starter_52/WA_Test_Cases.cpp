#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for( ll i=0;i<n;i++) cin >> v[i];
        string s;cin >> s;
        vector<ll> ans;
        for(ll i=0;i<n;i++) if(s[i]=='0') ans.push_back(v[i]);
        cout << *min_element(ans.begin(),ans.end()) << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}