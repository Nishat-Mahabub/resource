#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        n--;
        if(n==0) cout << 0 << endl;
        else if(n<=3) cout << 1 << endl;
        else{
            ll rim=n%5;
            ll div=n/5;
            if(rim==0) cout << 2*div  << endl;
            else if(rim==4) cout << 2*div + 2 << endl;
            else cout << 2*div + 1 << endl;
        }
    }
    return 0;
}