#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,x,y;cin >> a >> b >> x >> y;
        if((a+b-2)==x || (a+b-2)==y) cout << "Yes" << endl;
        else cout << "No" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}