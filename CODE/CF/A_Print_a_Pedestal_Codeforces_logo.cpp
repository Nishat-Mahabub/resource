#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        ll p=n-(n%3);
        if(n==7) cout << p/3 << " " << p/3 +2 << " " << p/3 -1 << endl;
        else if(n%3==0){
            cout << p/3 << " " << p/3 +1 << " " << p/3 -1 << endl;
        }
        else if(n%3==1) cout << p/3 + 1 << " " << p/3 +2 << " " << p/3 -2 << endl;
        else cout << p/3 +1 << " " << p/3 +2 << " " << p/3 -1 << endl;
    }
    return 0;
}