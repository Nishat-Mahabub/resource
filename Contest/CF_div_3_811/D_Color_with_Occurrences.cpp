#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string t;cin >> t;
        ll m;cin >> m;
        vector<pair<string,ll>> vs;
        for(ll i=0;i<m;i++){
            string s;cin >> s;
            vs.push_back({s,i});
        }
        sort(vs.rbegin(),vs.rend());
        vector<pair<ll,ll> > ans;
        ll s=0,prev=-1;
        while(s<t.size()){
            ll cur=s;
            while(prev<cur){
                ll ls=t.size()-cur;
                bool flag=false;
                for(ll i=0;i<m;i++){
                    if(vs[i].fst.size() > ls) continue;
                    string str=t.substr(cur,vs[i].fst.size());
                    if(str==vs[i].fst){
                        ans.push_back({vs[i].second,cur});
                        s=cur+vs[i].fst.size();
                        flag=true;
                        prev=cur;
                        cur=-1;
                        break;
                    }
                }
                if(flag) break;
                cur--;
                // cout << "THID";
            }
            if(cur==prev){
                    cout << -1 << endl;
                    break;
                }
            if(s==t.size()){
                cout << ans.size() << endl;
                for(auto x: ans) cout << x.fst + 1 << " " << x.second + 1 << endl;
            }
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