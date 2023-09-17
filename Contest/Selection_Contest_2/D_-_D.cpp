#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a ,b;cin >> a >> b;
        ll c=0;
        for(ll i=1;i<=b;i++){
            if(i%2==0) c+=i;
        }
        ll ans=(c*(a+1));
        ll d=0;
        for(ll i=1;i<=a;i++){
            if(i%2==0) d+=i;
        }
        ans+=(d*(b+1));
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}