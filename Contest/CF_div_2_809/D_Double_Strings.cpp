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
        string s;
        vector<int> ans(n,0);
        multimap<string,int> mp;
        for(int i=0;i<n;i++){
            cin >> s;
            mp.insert({s,i});
        }
        for(auto x:mp){
            string cur=x.fst;
            for(int i=0;i<cur.size()-1;i++){
                string l=cur.substr(0,i+1);
                string r=cur.substr(i+1,cur.size()-1-i);
                if(mp.find(l)!=mp.end() && mp.find(r)!=mp.end()) ans[x.sec]=1;
                // cout << l <<" " << r << endl;
            }
        }
        for(int i=0;i<n;i++) cout << ans[i];
        cout << endl;
    }
    return 0;
}