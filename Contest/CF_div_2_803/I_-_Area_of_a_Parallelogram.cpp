#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t=0;cin >> t;
    ll i=1;
    while(i<=t){
        ll x1,y1,x2,y2,x3,y3;cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
        ll x4=x1+(x3-x2);
        ll y4=y1+(y3-y2);
        ll a=0.5*abs((x1*y2 + x2*y3 + x3*y4 + x4*y1)-(x2*y1 + x3*y2 + x4*y3 + x1*y4));
        cout << "Case " << i << ": ";
        cout << x4 << " " << y4 <<" " << a << endl;
        i++;
        
    }
    return 0;
}