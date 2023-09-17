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
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            while(data>n && data>0){
                data/=2;
            }
            v[i]=data;
        }
        // for(ll i=0;i<n;i++) cout << v[i] << " ";
        // cout << endl;
        unordered_map<ll,bool> mp;
        for(ll i=0;i<n;i++){
            while(v[i]>0){
                if(mp.find(v[i])==mp.end()) {
                    mp[v[i]]=1;
                    break;
                }
                v[i]/=2;
            }
        }
        // for(auto i:mp){
        //     cout << i.first << " ";
        // }
        // cout << endl;
        if(mp.size()==n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}