#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll b,p,m;
    while(cin >> b >> p >> m){
        ll res=1;
        while(p){
            if(p&1) res=(res*b)%m;
            b=(b*b)%m;
            p>>=1;
        }
        cout << res%m << endl;
    }
    return 0;
}