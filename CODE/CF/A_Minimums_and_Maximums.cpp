#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll m=max(a,c);
        if(a==c) cout << a << endl;
        else if(m==a){
            if(d>=m){
                cout << m << endl;
            }
            else{
                cout << m+c << endl;
            }
        }
        else if(m==c){
            if(b>=m){
                cout << m << endl;
            }
            else{
                cout << m+a << endl;
            }
        }
    }
    return 0;
}