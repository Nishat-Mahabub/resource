#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string s;cin >> s;
        ll n=s.size();
        for(int i=1;i<=n;i++){
            cout << i*(i+1)/2 << endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}