#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,q;cin >> n >> q;
        ll odd=0,even=0;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            if(data&1) odd++;
            else even++;
            ans+=data;
        }
        while(q--){
            ll t,x;cin >> t >> x;
            if(t){
                ans+=odd*x;
                if(x&1){
                    odd=0;
                    even=n;
                } 
            }
            else{
                ans+=even*x;
                if(x&1){
                    odd=n;
                    even=0;
                } 
            }
            cout << ans << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}