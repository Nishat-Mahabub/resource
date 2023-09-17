#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<char> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll k;cin >> k;
        map<char,ll> mp;
        for(ll i=0;i<k;i++){
            char data;cin >> data;
            mp[data]++;
        }
        ll last=-1;
        ll mx=0;
        for(ll i=n-1;i>=0;i--){
            if(last!=-1) mx=max(mx,last-i);
            if(mp.find(v[i])!=mp.end()){
                last=i;
            }
        }
        cout << mx << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}