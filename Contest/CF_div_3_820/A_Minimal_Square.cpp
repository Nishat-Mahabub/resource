#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b;cin >> a >> b;
        if(2*min(a,b)> max(a,b)) cout << 4*min(a,b)*min(a,b) << endl;
        else cout << max(a,b)*max(a,b) << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}