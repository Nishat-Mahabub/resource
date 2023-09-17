#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        string s1,s2;
        vector<pair<string,string>> vs(n);
        map<string,ll> mp;
        for(ll i=0;i<n;i++){
            cin >> s1 >> s2 ;
            mp[s1]++;
            vs[i].fst=s1;
            vs[i].sec=s2;
        }
        for(int i=0;i<n;i++){
            if(mp[vs[i].fst]>1) cout << vs[i].fst << " " << vs[i].sec << endl;
            else cout << vs[i].fst << endl;
        }
    }
    return 0;
}