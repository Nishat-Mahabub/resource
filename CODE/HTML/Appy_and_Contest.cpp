#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,a,b,k;
        cin >> n >> a >> b >> k;
        ll c,d,f;
        ll e=(a*b)/__gcd(a,b);
        c=(n-(n%a))/a;
        d=(n-(n%b))/b;
        f=(n-(n%e))/e;
        //cout <<  c << " " << d << " " << f << endl;
        if((c+d-f)>=k) cout << "Win" << endl;
        else cout << "Lose" << endl;
    }
    return 0;
}