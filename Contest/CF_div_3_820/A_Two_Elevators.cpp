#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,c;cin >> a >> b >> c;
        ll x=abs(a-1);
        ll y=abs(1-c) + abs(b-c);
        if(x<y) cout << 1 << endl;
        else if(y<x) cout << 2 << endl;
        else cout << 3 << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}