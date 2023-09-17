#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        map<ll,ll> mp;
        ll tmp;cin >> tmp;
        mp[0]++;
        ll mx=0;
        for(ll i=1;i<n;i++){
            ll data ;cin >> data;
            mp[data-tmp]++;
        }
        if(mx>3 || mp[2]>2 || mp[3]>1 || ((mp[2]!=0) && (mp[3]!=0)) ){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}   