#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll a,b,c,d,e,f;cin >> a >> b >> c >> d >> e >> f;
        ll ans = abs(a-c) + abs(b-d);
        if(a==c && c==e && a==e){
            if((f>b && f<d) || (f<b && f>d)) ans+=2;
        }
        if(b==d && d==f && b==f){
            if((e>b && e<a) || (e<b && e>a)) ans+=2;
        }
        cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}