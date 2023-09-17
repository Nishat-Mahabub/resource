#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        double n,x;cin >> n >> x;
        cout << ceil((n-2)/(x)) +1;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}