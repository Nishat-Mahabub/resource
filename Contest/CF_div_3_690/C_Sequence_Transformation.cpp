#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;

        map<ll,vector<ll>> mp;
        for(ll i=1;i<=n;i++){
            ll data;cin >> data;
            mp[data].push_back(i);
        }
        ll ans=INT_MAX;
        for(auto x:mp){
            if(x.second.size()==n) ans=0;
            else if(x.second.size()==1){
                if(x.second[0]==1 || x.second[0]==n){
                    ans=min(ans,(ll)1);
                }
                else{
                    ans=min(ans,(ll)2);
                }
            }
            else{
                ll count=0;
                // cout << x.second.size() << endl;
                if(x.second[0]!=1) count++;
                if(x.second[x.second.size()-1]!=n) count++;
                for(ll j=0;j<x.second.size()-1;j++){
                    // cout << 
                    if((x.second[j+1]-x.second[j])>1) count++;
                }
                ans=min(ans,count);
            }

        }
        cout << ans ;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}   