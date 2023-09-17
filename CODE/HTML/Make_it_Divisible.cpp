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
        if(n==1) cout << 3 << endl;
        else if(n==2) cout << 21 << endl;
        else{
            cout << 2;
            for(ll i=1;i<=n-2;i++) cout << 0;
            cout << 1 << endl;
        }
    }

    return 0;
}