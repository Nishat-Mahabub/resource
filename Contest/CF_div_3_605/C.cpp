#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,k;cin >> n >> k;
        string s;cin >> s;
        map<char,ll> mp;
        for(ll i=0;i<k;i++){
            char c;cin >> c;
            mp[c]++;
        }
        ll ans=0;
        ll ct=0;
        for(ll i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                ct++;
            }
            else{
                ans+= (ct*(ct+1)/2);
                ct=0;
            }
        }
        if(ct>0){
            ans+= (ct*(ct+1)/2);
            ct=0;
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}