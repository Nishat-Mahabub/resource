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
        ll data;
        vector<ll> v;
        map<ll,ll> mp;
        ll z=0;
        for(ll i=0;i<n;i++){
            cin >> data;
            if(data!=0) v.push_back(data);
            else z++;
        }
        if(v.size()>4){
            cout << "NO" << endl;
            continue;
        }
        if(z>0){
            v.push_back(0);
        }
        for(ll i=0;i<v.size();i++) mp[v[i]]++;
        bool flag=false;
        // for(auto x:mp) cout << x.fst << " ";
        for(ll i=0;i<v.size();i++){
            for(ll j=i+1;j<v.size();j++){
                for(ll k=j+1;k<v.size();k++){
                    if(mp[v[i]+v[j]+v[k]]==0){
                        cout << "NO" << endl;
                        flag=true;
                        break;
                        
                    }
                }
                if(flag) break;
            }
                if(flag) break;
        }
        if(flag==false) cout << "YES" << endl;
    }
    return 0;
}   