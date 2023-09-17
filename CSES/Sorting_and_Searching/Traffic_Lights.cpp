#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll x,n;cin >> x >> n;
        set<ll> s;
        multiset<ll> ms;
        s.insert(0);
        s.insert(x);
        ms.insert(x);
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            auto it =upper_bound(s.begin(),s.end(),data);
            ll r=*it;
            it--;
            ll l=*it;
            ms.insert(r-data);
            ms.insert(data-l);
            ms.erase(ms.find(r-l));
            s.insert(data);
            cout << *(--ms.end()) << " ";
            // cout << l << " " << r << endl;

        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}