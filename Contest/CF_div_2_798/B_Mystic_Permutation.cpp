#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        if(n==1){
             cout << -1 << endl;
             return;
        }
        map<ll,ll> mp;
        vector<ll > ans;
        for(ll i=0;i<n;i++){
            for(ll j=1;j<=n;j++){
                if(j!=v[i] && mp.find(j)==mp.end()){
                    ans.push_back(j);
                    mp[j]++;
                    break;
                }
            }
        }
        if(ans.size()==n-1){
            ans.push_back(n);
            swap(ans[n-1],ans[n-2]);
        } 
        
        for(auto x:ans) cout << x << " ";
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