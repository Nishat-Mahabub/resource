#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n,m,x,y,d;
        cin >> n >> m >> x >> y >> d;
        ll ls =n-x + m-y;
        ll ans=n+m-2;
        ll up=abs(x-1);
        ll down=abs(n-x);
        ll left =abs(1-y);
        ll right =abs(m-y);
        if(ls>d){
            if((left>d && down>d) || (up>d && right>d)){
                cout << ans << endl;
            }
            else cout << -1 << endl;
        }
        else cout << -1 << endl;
        // for( auto x:v) cout << x << " ";
        // cout << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}