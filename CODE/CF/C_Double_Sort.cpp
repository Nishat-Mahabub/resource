#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

bool chek(vector<ll> &v){
    for(ll i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<ll> va(n),vb(n);
        vector<pair<ll,ll>> vp;
        for(ll i=0;i<n;i++) cin >> va[i];
        for(ll i=0;i<n;i++) cin >> vb[i];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n-i-1;j++){
                if(va[j] > va[j+1] || vb[j] > vb[j+1]){
                    swap(va[j],va[j+1]);
                    swap(vb[j],vb[j+1]);
                    // cout << j << " " << j+1 << endl;
                    vp.push_back({j+1,j+2});
                }
            }
        }
        if(chek(va) && chek(vb)){
            cout << vp.size() << endl;
            for(int i=0;i<vp.size();i++){
                cout << vp[i].fst << " " << vp[i].sec << endl;
            }
        } 
        else cout << -1 << endl;
    }
    return 0;
}