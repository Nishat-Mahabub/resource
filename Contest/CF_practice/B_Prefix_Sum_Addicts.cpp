#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,k;cin >> n >> k;
        vector<ll> v(k);
        for(ll i=0;i<k;i++) cin >> v[i];
        if(k==1) {
            cout << "Yes" << endl;
            return;
        }
        ll dif=v[1]-v[0];
        for(ll i=2;i<k;i++){
            if(v[i]-v[i-1]<dif){
                cout << "No" << endl;
                return;
            }
            dif=v[i]-v[i-1];
        }

        if((v[1]-v[0])*(n-k+1)<v[0]) cout << "No" << endl;
        else cout << "Yes" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}