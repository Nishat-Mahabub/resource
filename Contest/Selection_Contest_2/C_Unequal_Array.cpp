#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll start=-1,end=-1;
        for(ll i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                start=i;
                break;
            }
        }
        for(ll i=n-1;i>0;i--){
            if(v[i]==v[i-1]){
                end=i;break;
            }
        }
        if(start==end) cout << 0 << endl;
        else{
            ll x=(end-start+1);
            if(x>=5) cout << x-3 << endl;
            else if(x==2) cout << 0 << endl;
            else cout << 1 << endl;
        }
        // cout << "start " << start << " End "  << end << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}