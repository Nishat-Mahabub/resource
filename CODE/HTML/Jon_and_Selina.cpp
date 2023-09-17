#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s;cin >> s;
        map<char,ll> mp;
        for(ll i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        bool flag=true;
        for(auto x:mp){
            if(x.sec&1){
                cout << x.fst << endl;
                flag=false;
                break;
            }
        }
        if(flag) cout << -1 << endl;
    }
    return 0;
}