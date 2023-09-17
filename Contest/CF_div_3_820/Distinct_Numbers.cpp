#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        map<ll,ll> mp;
        ll n,k;cin >> n >> k;
        ll mx=INT_MIN;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            mp[data]=1;
            mx=max(data,mx);
        }
        ll score=0;
        ll score_1=0;
        ll k1=k-1;
        for(ll i=1;i<2*n;i++){
            if(k1==0) {
                // cout << score_1 << endl;
                break;
            }
            if(mp.find(i)==mp.end()){
                score_1+=(2*n-i);
                k1--;
            }
        }
        for(ll i=1;i<mx;i++){
            if(k==0) {
                cout << score << endl;
                return;
            }
            if(mp.find(i)==mp.end()){
                score+=(mx-i);
                k--;
            }
        }

        if(k>0){
            for(ll i=mx+1;i<=2*n;i++){
                if(k==0) {
                cout << score << endl;
                return;
                }
                score+=((2*n)-i);
                k--;
            }
        }
        cout << max(score,score_1)  << endl;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}