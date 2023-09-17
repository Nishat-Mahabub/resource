#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        string s;cin >> s;
        string tmp=s;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        ll ans=0;
        ll p=-1;
        for(ll i=0;i<n;i++){
            if(s[i]=='0') p=i;
            if(p!=-1  && v[i]< v[p]) swap(s[i],s[p]),p=i;
        }
        for(ll i=0;i<n;i++) if(s[i]=='1') ans+=v[i];

        cout << ans << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}