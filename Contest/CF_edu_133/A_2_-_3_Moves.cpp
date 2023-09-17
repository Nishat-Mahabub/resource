#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        if(n==1) cout << 2  << endl;
        else{
            if(n%3==0) cout << n/3 << endl;
            else cout << (n/3) +1 << endl; 
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}