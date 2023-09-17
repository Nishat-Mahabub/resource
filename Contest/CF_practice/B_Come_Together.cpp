#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = ";  print(x)
#define ll long long
#define f first
#define s second
#define pb push_back
#define mod (ll)(1e9+7)
void print(vector<ll> &vec){
    for(ll i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}
void print(ll x){
    cout << x << endl;
}
void print(char x){
    cout << x << endl;
}
void print(string &x){
    cout << x << endl;
}
//============================================//
void solve(){
        ll a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        ll ans = 1;
        if(c>e) swap(c,e);
        if(d>f) swap(d,f);

        if(a<c) ans+=(c-a);
        if(a>e) ans+=(a-e);
        if(b<d) ans+=(d-b);
        if(b>f) ans+=(b-f);

        if(a==b && b==c && c==d && d==e && e==f ) cout << 0 << endl;
        else cout << ans << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}