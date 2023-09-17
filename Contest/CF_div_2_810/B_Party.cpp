#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,m;cin >> n >> m;
        vector<pair<ll,ll>> pairr(m);
        vector<ll> uns_val(n+1);
            vector<ll> count(n+1,0);
            for(int i=1;i<=n;i++){
                cin >> uns_val[i];
            }
            for(int i=0;i<m;i++){
                ll x,y;
                cin >> x >> y;
                pairr[i]={x,y};
                count[x]++;
                count[y]++;
            }
        ll ans=INT_MAX;
        if(m%2==0){
            cout << 0 << endl;
            continue;
        }
        else{
            for(int i=1;i<=n;i++){
                if(count[i]&1){
                    ans=min(ans,uns_val[i]);
                }
            }
            for(auto x:pairr){
                if((count[x.first])%2==0 && (count[x.second])%2==0){
                    ans=min(ans,uns_val[x.first]+uns_val[x.second]);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}