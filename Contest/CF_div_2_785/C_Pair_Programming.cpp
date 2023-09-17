#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll k,m,n;cin >> k >> m >> n;
        vector<ll> mono,poly;
        vector<ll> ans;
        for(ll i=0;i<m;i++){
            ll data;cin >> data;
            if(data==0){
                 k++;
                 ans.push_back(data);
            }
            else{
                mono.push_back(data);
            }
        }

        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            if(data==0){
                 k++;
                 ans.push_back(data);
            }
            else{
                poly.push_back(data);
            }
        }
        for(ll i=0;i<mono.size();i++){
            if(mono[i]>k){
                cout << -1 << endl;
                return;
            }
            else ans.push_back(mono[i]);
        }
        for(auto x:poly){
            if(x>k){
                cout << -1 << endl;
                return;
            }
            else ans.push_back(x);
        }
        for( auto x:ans) cout << x << " ";
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