#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if((x-y)==(y-z)){
             cout << "YES" << endl;
             continue;
        }
        if((x+z)%(2*y)==0){
             cout << "YES" << endl;
             continue;
        }
        if((2*y-z)>0){
            if((2*y-z)%x==0){
             cout << "YES" << endl;
             continue;
        }
        }
        if((2*y-x)>0){
            if((2*y-x)%z==0){
             cout << "YES" << endl;
             continue;
        }
        }
        cout << "NO" << endl;
    }
    return 0;
}