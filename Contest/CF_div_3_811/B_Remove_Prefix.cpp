#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)cin >> v[i];
        map<int,int> mp;
        for(ll i=v.size()-1;i>=0;i--){
            if(mp.find(v[i])!=mp.end()){
                cout << i+1 << endl;
                return ;
            }
            mp[v[i]]++;
        }
        cout << 0 << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}