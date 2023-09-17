#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve()
{
    ll n, m;
    cin >> n;
    ll mx = -1;
    ll ans = 1;
    ll mn = n+1;
    for(ll i=0;i<n;i++) {
        ll data;
        cin >> data;
        if(mx >= data && mn >= data) ans++;
        mx = max(data, mx);
        mn = min(mn, data);
    }
    cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=1;//cin >> t;
    while(t--){
        solve();
    }
    return 0;
}