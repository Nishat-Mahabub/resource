#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v;
        for(ll i=1;i<=n;i++){
            string s=to_string(i);
            string n=s;
            reverse(s.begin(),s.end());
            if(s==n) v.push_back(i);
        }
        for(auto x:v) cout << x << " ";
        cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}