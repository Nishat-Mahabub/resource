#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,k;cin >> n >> k;
        if(n<k){
            cout << 1 << endl;
            return ;
        }
        else{
            ll ans=INT_MIN;
            for(ll i=1;i*i<=n;i++){
                if(n%i==0){
                    if(i<=k) ans=max(i,ans);
                    if(n/i<=k) ans=max(n/i,ans);
                }
            }
            cout << n/ans << endl;
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