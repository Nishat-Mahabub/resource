#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,n;cin >> a >> b >> n;
        ll da=1,db=1;
        while((a&1)==0){
            a>>=1;
            da*=2;
        }
        while((b&1)==0){
            b>>=1;
            db*=2;
        }
        if(da*db >=n)cout << "YES" << endl;
        else cout << "NO" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}