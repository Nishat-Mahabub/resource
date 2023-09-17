#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll l ,r;cin >> l >> r;
        ll n=(r-l)+1;
        cout << (n*(n+1))/2 << endl;
    }
    return 0;
}