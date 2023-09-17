#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second

ll fact(ll n){
    if(n==0) return 2;
    return n*fact(n-1);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        cout << fact(n) << endl;
    }
    return 0;
}