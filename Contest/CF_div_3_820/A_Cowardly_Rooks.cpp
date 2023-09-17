#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,m;cin >> n >> m;
        map<ll,ll> rmp;
        map<ll,ll> cmp;
        for(ll i=0;i<m;i++){
            ll f,s;cin >>  f >> s;
            rmp[f]++;
            cmp[s]++;
        }
        for(auto x:rmp){
            if(x.first -1>=1){
                if(rmp.find(x.first-1)==rmp.end()){
                    cout << "NO" << endl;
                    return;
                }
            }
            if(x.first +1<=n){
                if(rmp.find(x.first+1)!=rmp.end()){
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        for(auto x:cmp){
            if(x.first -1>=1){
                if(cmp.find(x.first-1)!=cmp.end()){
                    cout << "NO" << endl;
                    return;
                }
            }
            if(x.first +1<=n){
                if(cmp.find(x.first+1)!=cmp.end()){
                    cout << "NO" << endl;
                    return;
                }
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