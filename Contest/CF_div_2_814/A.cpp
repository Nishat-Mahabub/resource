#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b;cin >> a >> b;
        if((a+b-1)%2==0) cout << "Burenka" << endl;
        else cout << "Tonya" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}