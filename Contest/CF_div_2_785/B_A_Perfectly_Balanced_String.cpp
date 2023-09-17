#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string s;cin >> s;
        map<char,ll > mp;
        set<char> ss; 
        ll x=s.size();
        for(ll i=0;i<x;i++){
            ss.insert(s[i]);
        }
        
        if(ss.size()==1) {
            cout << "YES" << endl;
            return;
        }
        ll mn=LLONG_MAX;
        for(ll i=0;i<x;i++){
            if(mp.find(s[i])!=mp.end()){
                mn=min(mn,i-mp[s[i]]-1);
            }
            mp[s[i]]=i;
        }
        if(mn<ss.size()-1) cout << "NO" << endl;
        else cout << "YES" << endl;

        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}