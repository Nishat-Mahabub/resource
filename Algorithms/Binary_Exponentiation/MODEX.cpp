#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    for(;;){
        ll t;cin >> t;
        if(t==0) break;
        while(t--){
            ll n,x,y;cin >> n >> x >> y;
            ll ans=1;
            while(x){
                if(x&1) ans=(ans*n)%y;
                n=(n*n)%y;
                x=x >> 1;
            }
            cout << ans%y << endl;
        }
    }
    return 0;
}