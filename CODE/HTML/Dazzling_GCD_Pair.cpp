#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll a,b;cin >> a >> b;
        if(a==1) a++;
        if(a%2==0){
            if(a+2<=b)cout << a << " " << a+2 << endl;
            else cout << -1 << endl;
            //cout << __gcd(a,a+2) << endl;
        }
        else 
        {
            if(a+3<=b){
                if(__gcd(a,a+3)>2) cout << a << " " << a+3 << endl;
                else cout << a+1 << " " << a+3 << endl;
            }
            else cout << -1 << endl;
            //cout << __gcd(a+1,a+3) << endl;
        }
    }
    return 0;
}