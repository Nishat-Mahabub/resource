#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        //  || (l-x)==0  || (l-x)%2==0
        ll l,x;cin >> l >> x;
        if(x&1){
            cout << "YES" << endl;
        }
        else{
            if((l-x)%2==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}