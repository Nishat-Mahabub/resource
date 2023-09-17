#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll x=n%2020;
        ll d=n/2020;
        if(x>d){
            cout << "NO" << endl; 
        }
        else cout << "YES" << endl;
    return ;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}