#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll x,y;cin >> x >> y;
        ll a=y/x;
        if(y%x!=0) cout <<"0 0" << endl;
        else cout << 1 << " " << a << endl;

    }
    return 0;
}