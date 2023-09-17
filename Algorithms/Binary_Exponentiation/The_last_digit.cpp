#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >>t;
    while(t--){
        ll a,b;cin >> a >> b;
        ll ans=1;
        while(b){
            if(b&1) ans=(ans*a)%10;
            a=(a*a)%10;
            b = b >> 1;
        }
        cout << ans%10 << endl;
    }
    return 0;
}