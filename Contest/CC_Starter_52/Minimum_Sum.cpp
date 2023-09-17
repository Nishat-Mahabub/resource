#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
ll N=1e6+1;
vector<bool> seive(N,true);
void implement_seive(){
    for(ll i=2;i*i<=N;i++){
        for(ll j=i*i;j<N;j+=i){
            seive[j]=false;
        }
    }
}
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        
        sort(v.begin(),v.end());
        map<ll,ll> mp;
        ll ans=v[0];
        bool fg=false;
        ll mn=LLONG_MAX;
        for(ll i=0;i<n-1;i++){
            ll x=__gcd(v[0],v[i+1]);
            if(x==1){
                cout << n << endl;
                return;
            }
            else{
                mn=min(mn,x);
            }
            if(v[i+1]-v[i]==1) {
                fg=true;
                break;
            }
            // if(seive[v[i]]!=false){
            //     mp[v[i]]++;
            // }
        }
        if(fg) cout << n << endl;
        else cout << mn*n << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    implement_seive();
    while(t--){
        solve();
    }
    return 0;
}