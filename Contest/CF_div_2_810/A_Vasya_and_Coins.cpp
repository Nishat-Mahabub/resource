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
        ll ans=0;
        if(a==0) cout << 1 << endl;
        else if(a==0 && b==0) cout << 0 << endl;
        else{
            cout << (a+1) + 2*b << endl;
        }
    }
    return 0;
}