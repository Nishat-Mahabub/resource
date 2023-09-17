#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll a,b;cin >> a >> b;
        if((a+b)%2==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}