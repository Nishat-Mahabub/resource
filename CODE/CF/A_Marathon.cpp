#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll a,x,y,z;cin >> a >> x >> y >> z;
        ll ct=0;
        if(a<x) ct++;
        if(a<y) ct++;
        if(a<z) ct++;
         cout << ct << endl;
    }
    return 0;
}