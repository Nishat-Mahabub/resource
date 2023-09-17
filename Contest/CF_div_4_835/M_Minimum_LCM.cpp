#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll a=1;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                break;
            }
        }
        cout << a << " " << n-a << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}