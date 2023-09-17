#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,c;cin >> a >> b >> c;

        ll x=(abs(a-b)+abs(c-b)+abs(a-c));
        if(x<5) cout << 0 << endl;
        else cout << x-4 << endl;
        
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}