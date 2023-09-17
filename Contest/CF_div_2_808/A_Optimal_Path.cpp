#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,m;cin >> n >> m;
        ll ans=0;
        for(ll i=1;i<=m;i++){
            ans+=i;
        }
        for(ll i=2;i<=n;i++){
            ans+=i*m;
        }
        cout << ans<< endl;
    }
    return 0;
}