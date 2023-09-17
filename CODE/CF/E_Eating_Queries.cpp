#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,q;cin >> n >> q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        vector<ll> vs(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=v[i];
            vs[i]=sum;
        }
        while(q--){
            ll data;cin >> data;
            auto i = lower_bound(vs.begin(),vs.end(),data) - vs.begin();
            if(i>=n) cout << -1 << endl;
            else cout << i+1 << endl;
        }
    }
    return 0;
}