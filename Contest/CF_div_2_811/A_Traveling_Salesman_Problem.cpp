#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll ans=0;
        ll l=0,r=0,u=0,d=0;
        while(n--){
            ll a,b;cin >> a >> b;
            if(a==0 && b>0) u=max(u,b);
            if(a==0 && b<0) d=max(d,abs(b));
            if(b==0 && a>0) r=max(r,a);
            if(b==0 && a<0) l=max(l,abs(a));
        }
        cout << 2*(u+d+l+r) << endl;
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