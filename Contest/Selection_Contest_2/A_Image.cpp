#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        set<char> s;
        for(ll i=0;i<4;i++){
            char c;
            cin >> c;
            s.insert(c);
        }
        cout << s.size()-1 << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}