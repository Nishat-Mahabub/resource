#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v1,v2;

        for(ll i=0;i<n;i++) {
            ll data;cin >> data;
            if(i<n/2) v2.push_back(data);
            if(i>=(n+1)/2) v1.push_back(data);
        }
        // for(auto x:v1) cout << x << " ";
        // cout << endl;
        // for(auto x:v2) cout << x << " ";
        // cout << endl;
        // ll ans=0;
        reverse(v2.begin(),v2.end());
        ll op=0;
        for(ll i=0;i<n/2;i++){
            v2[i]+=op;
            if(v2[i] > v1[i]){
                 cout << -1 << endl;
                 return;
            }
            else{
                op+=(v1[i]-v2[i]);
            }
        }
        cout << op << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}