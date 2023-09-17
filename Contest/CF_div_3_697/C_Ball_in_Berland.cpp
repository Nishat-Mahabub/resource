#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,k;cin >> a >> b >>k;
        map<ll,ll> bmp;
        map<ll,ll> gmp;
        vector<pair<ll,ll>> v(k);
        for(ll i=0;i<k;i++){
            cin >> v[i].fst;
            bmp[v[i].fst]++;
        }
        for(ll i=0;i<k;i++){
            cin >> v[i].sec;
            gmp[v[i].sec]++;
        }
        ll sum=0;
        for(ll i=0;i<k;i++){
            sum+=k-(bmp[v[i].fst]+ gmp[v[i].sec] -1);
        }
        cout << sum/2 << endl;
        return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}