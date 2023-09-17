#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
#define mod (ll)(1e9+7)
void solve(){
        ll n,x;cin >> n >> x;
        vector<ll> child_weight(n);
        for(ll i=0;i<n;i++) cin >> child_weight[i];
        sort(child_weight.begin(),child_weight.end());
        // for(auto x:child_weight) cout << x << " ";
        // cout << endl;
        ll i=0,j=n-1;
        ll total_gonald=0;
        while(i<=j){
            ll t_weight=child_weight[j];
            if(t_weight+child_weight[i]<=x && i<j){
                t_weight+=child_weight[i];
                i++;
            }
            total_gonald++;
            j--;
        }
        cout << total_gonald << endl;

}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}