#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
         ll a ,b;cin >> a >> b;
        ll sum=0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
       
        for(int i=a;i<=b;i++){
            sum+=v[i];
        }
        cout << sum << endl;


}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}