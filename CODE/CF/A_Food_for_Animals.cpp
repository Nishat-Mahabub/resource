#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll a,b,c,x,y;
        cin >> a >> b >> c >> x >> y;
        ll f,e;
        if(x-a<0){
            f=0;
        }
        else{
            f=x-a;;
        }
        if(y-b<0){
            e=0;
        }
        else{
            e=y-b;
        }
        ll d = e + f;
        if(d<=c) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}