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
        if(y==x) cout << 0 << endl;
        else{
            if(y%x==0) cout << (y/x)-1 << endl;
            else cout << y/x << endl;
        }
    }
    return 0;
}