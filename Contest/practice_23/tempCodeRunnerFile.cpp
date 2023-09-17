#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll ans=0;
        ll fb=0;
        ll ct=2;
        for(ll i=0;i<n;i++){
            if(v[i]==0){
                ct++;continue;
            }
            while((v[i]&1)!=1){
                fb++;
                v[i]=v[i]>> 1;
            }
            if((v[i]&1)==1) break;
        }
        ans+=fb;
        ll lb=1;
        for(ll i=n-1;i>=0;i--){
            if(v[i]==0){
                ct++;continue;
            }
            while((v[i]&1)!=1){
                // cout << "This ";
                lb++;
                v[i]=v[i]>> 1;

            }
            if((v[i]&1)==1) break;
        }
        // cout << "lb" << " " << lb << endl;
        ans+=(8-lb);
        // cout << ans << endl << ct << endl;
        ans= ans+ (n-ct)*8;
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