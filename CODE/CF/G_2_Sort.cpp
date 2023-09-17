#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,k;cin >> n >> k;
        ll ans=0;
        ll ct=1;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        for(ll i=0;i<n-1;i++){
            if(2*v[i+1]>v[i]){
                ct++;
            }
            else{
                if(ct>=k+1){
                    ans+=ct-(k+1)+1;
                }
                // cout << "ct" << ct << endl;
                ct=1;
            }
        }
        if(ct>=k+1){
            ans+=ct-(k+1)+1;
        }
        cout << ans << endl;
    }
    return 0;
}