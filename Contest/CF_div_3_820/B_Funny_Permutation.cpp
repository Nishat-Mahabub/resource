#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        if(n==3){
            cout << -1 << endl;
            return;
        }
        if(!(n&1)){
            for(ll i=n;i>=1;i--) cout << i << " ";
            cout << endl;
        }
        else{
            cout << n << " " << n-1 << " ";
            for(int i=1;i<n-1;i++) cout << i << " ";
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