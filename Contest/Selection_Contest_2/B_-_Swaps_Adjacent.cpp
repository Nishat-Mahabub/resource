#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,q;cin >> n >> q;
        vector<ll> auxi(n+1),v(n+1);
        for(ll i=1;i<=n;i++){
            auxi[i]=i;
            v[i]=i;
        }
        while(q--){
            ll x;cin >> x;
            ll ind=auxi[x];
            if(ind==n){
                ll data=v[ind-1];
                swap(v[ind],v[ind-1]);
                swap(auxi[x],auxi[data]);
            }
            else{
                ll data=v[ind+1];
                swap(v[ind],v[ind+1]);
                swap(auxi[x],auxi[data]);
            }
        }
        for(ll i=1;i<=n;i++) cout << v[i] << " ";
        cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}