#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string s;cin >> s;
        map<char,vector<ll>> mp;
        for(ll i=0;i<s.size();i++){
            mp[s[i]].push_back(i+1);
        }
        if(s[0]<s[s.size()-1]){
            ll cost=abs(s[0]-s[s.size()-1]);
            vector<ll> path;
            for(int i=0;s[0]+i<=s[s.size()-1];i++){
                if(mp.find(s[0]+i)!=mp.end()){
                    for(auto index:mp[s[0]+i]) path.push_back(index);
                }
            }
            cout << cost << " " << path.size() << endl;
            for(auto index: path) cout << index << " ";
            cout << endl;
        }
        else if(s[0]>s[s.size()-1]){
            ll cost=abs(s[0]-s[s.size()-1]);
            vector<ll> path;
            for(int i=0;s[0]+i>=s[s.size()-1];i--){
                if(mp.find(s[0]+i)!=mp.end()){
                    for(auto index:mp[s[0]+i]) path.push_back(index);
                }
            }
            cout << cost << " " << path.size() << endl;
            for(auto index: path) cout << index << " ";
            cout << endl;
        }
        else{
            cout << 0 << " " << mp[s[0]].size() << endl;
            for(auto ind:mp[s[0]]) cout << ind << " ";
            cout << endl;
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