#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        map<ll, vector<ll> > mp;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            mp[data].push_back(i+1);
        }
        vector<ll> ans;
        for(auto &x:mp){
            if(x.sec.size()==1){
                cout << -1 << endl;
                return;
            }
            if(x.sec.size()%2==0){
                reverse(x.sec.begin(),x.sec.end());
                ans.insert(ans.end(),x.sec.begin(),x.sec.end());
            }
            else{
                ans.push_back(x.sec[x.sec.size()-1]);
                ans.insert(ans.end(),x.sec.begin(),x.sec.end()-1);
            }
        }
        for(auto &x:ans) cout << x << " ";
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