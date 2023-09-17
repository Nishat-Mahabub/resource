#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%4==0) cout << n/4 << endl;
        else cout << (n/4) +1 << endl; 
    }
    return 0;
}