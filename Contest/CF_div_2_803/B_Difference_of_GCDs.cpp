#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,l,r;cin >> n >> l >> r;
        vector<ll> v;
        ll data;
        for(ll i=1;i<=n;i++){
            if(l%i!=0) data=l+ i-(l%i);
            else data=l;
            if(data>r)break;
            v.push_back(data);
        }
        // cout << v.size() << endl;
        if(v.size()==n){
            cout << "YES" << endl;
            for(auto x:v) cout << x << " ";
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}