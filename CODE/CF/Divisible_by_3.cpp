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
        ll ct=0;
        if(a%3==0 || b%3==0){
            cout << ct << endl;
            continue;
        }
        while(a!=0 && b!=0){
            ll s=abs(a-b);
            ct++;
            if(s%3==0) break;
            if(a>b) a=s;
            else b=s;
        }
        cout << ct << endl;
    }
    return 0;
}