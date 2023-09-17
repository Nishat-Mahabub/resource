#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            int data;cin >> data;
            mp[data].emplace_back(i);
        }
        int a,b;
        while(q--){
            cin >> a >> b;
            if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end()){
                int x=mp[a].front();
                int y=mp[b].back();
                if(x<y) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}