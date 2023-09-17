#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        for(ll i=1;i<=n;i++){
            cout << 1 << " ";
            for(ll j=1;j<=i-2;j++){
                cout << 0 << " ";
            }
            if(i>1) cout << 1 ;
            cout << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}