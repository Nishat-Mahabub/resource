#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll l,r;cin >> l >> r;
        if(l&1){
            if(r-l==3) cout << -1 << endl;
            else{
                cout << l+1 << " " << l+2 << " " << l+3 << " " << l+4 << endl;
            }
        }
        else cout << l << " "<< l+1 << " " << l+2 << " " << l+3 << endl;
    }
    return 0;
}