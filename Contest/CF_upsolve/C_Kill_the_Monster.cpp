#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll hc,ac,hm,am;cin >> hc >> ac >> hm >> am ;
        ll k, w, a;cin >> k >> w >> a;
        for(ll i=0;i<=k;i++){
            ll hc1= hc + (i*a);
            ll ac1 = ac+ ((k-i)*w);
            ll x=(hm/ac1);
            ll y=(hc1/am);
            if((hm%ac1!=0))  x++;
            if((hc1%am!=0))  y++;
            // cout << x << " " << y << endl;
            if(x <= y){
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" <<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}