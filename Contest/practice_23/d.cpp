#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        ll count_0=0;
        ll data;
        for(ll i=0;i<n;i++) {
            cin >> v[i];
            if(v[i]==0) count_0++;
            else data=v[i];
        }
        if(count_0==n){
            cout << -1 << endl;
            return;
        }
        if(count_0==n-1){
            ll x=__builtin_popcount(data);
            if(x==1){
                cout << 0 << endl;
                return ;
            }
            else{
                ll ans=0;
                while((data&1)!=1){
                    data=data>>1;
                }
                if((data&1)==1){
                    data>>=1;
                    while(data!=0) {
                        ans++;
                        data>>=1;
                    }
                }
                cout << ans-1 << endl;
                return;
            }
        }
        ll ans=0;
        ll fb=0;
        ll ct=0;
        for(ll i=0;i<n;i++){
            if(v[i]==0){
                ct++;continue;
            }
            while((v[i]&1)!=1){
                fb++;
                v[i]=v[i]>> 1;
            }
            if((v[i]&1)==1) {ct++;break;}
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
            {ct++;break;}
        }
        // cout << "lb" << " " << lb << endl;
        if(lb>8) lb--;
        ans+=(8-lb);
        cout << lb << endl << ct << endl;
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