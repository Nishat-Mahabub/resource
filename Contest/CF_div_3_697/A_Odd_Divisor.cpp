#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        if(n&1){
            cout << "YES" << endl;
            return;
        }
        else{
            ll x= __builtin_popcountll(n);
            // cout << "shift " << x << endl; 
            if(x==1){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}