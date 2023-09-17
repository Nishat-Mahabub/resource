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
        if(x<=y && y<=x+200) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}