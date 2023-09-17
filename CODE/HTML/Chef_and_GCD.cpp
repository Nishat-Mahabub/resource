#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
         ll a ,b;cin >> a >> b;
         ll gc=__gcd(a,b);
         if(gc>1) cout << 0 << endl;
         else{
             if(__gcd(a+1,b)>1 || __gcd(a,b+1)>1) cout << 1 << endl;
             else cout << 2 << endl;
         }
    }
    return 0;
}