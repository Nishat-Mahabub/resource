#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
             cin >> v[i];
             mp[v[i]]++;
        }
        ll ct=1;
        ll ans=0;
        bool fg=true;
        for(ll i=n-1;i>0;i--){
            if(v[i]==v[i-1]) ct++;
            else if(v[i-1]<v[i]){
                if(ct==mp[v[i]]) {
                    ans++;
                    ct=1;
                }
                else break;
            }
            else{
                fg=false;
                if(ct==mp[v[i]]) {
                    ans++;
                    ct=1;
                }
                break;
            } 
        }
        if(ans==mp.size()-1 && fg ) ans++;
        cout << mp.size() - ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}