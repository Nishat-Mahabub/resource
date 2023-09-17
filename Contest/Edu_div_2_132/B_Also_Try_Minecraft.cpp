#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
        ll n,q;cin >> n >> q;
        vector<ll> v(n+1);
        vector<pair<ll,ll>> ps(n+1);
        for(int i=1;i<=n;i++) cin >> v[i];
        ps[0].fst=0;
        for(ll i=2;i<=n;i++){
            if(v[i-1]>v[i]) ps[i].fst+=ps[i-1].fst+(v[i-1]-v[i]);
            else ps[i].fst+=ps[i-1].fst;
        }
        ps[n].sec=0;
        for(ll i=n-1;i>=1;i--){
            if(v[i+1]>v[i]) ps[i].sec+=ps[i+1].sec+(v[i+1]-v[i]);
            else ps[i].sec+=ps[i+1].sec;
        }

        while(q--){
            ll s,t;cin >> s >> t;
            if(s<t) cout << ps[t].fst - ps[s].fst << endl;
            else cout << ps[t].sec - ps[s].sec << endl;
        }
    return 0;
}