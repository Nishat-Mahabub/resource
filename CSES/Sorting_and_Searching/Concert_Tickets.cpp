#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n,c;cin >> n >> c;
        multiset<ll> v;
        for(ll i=0;i<n;i++) {
            ll data;cin >> data;
            v.insert(data);
        }
        vector<ll> customer(c);
        // auto it=v.lower_bound(customer[i]);
        for(ll i=0;i<c;i++) cin  >> customer[i];
        for(ll i=0;i<c;i++){
            
            auto it=v.lower_bound(customer[i]);
            if(it==v.begin()) {
                if(*it==customer[i]){
                    cout << *it << endl;
                    v.erase(it);
                }
                else cout << -1 << endl;
            }
            else if(*it==customer[i]){
                 cout << *it << endl;
                 v.erase(it);
            }
            else {
                it--;
                cout << *it << endl;
                v.erase(it);
            }

        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}