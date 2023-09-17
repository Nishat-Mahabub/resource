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
        // for(ll i=2;i<100;i++){
        //         ll n=i;
                n--;
            if(n%4==1 || n%4==2) cout << 3 << endl;
            else{
                ll d=n/4;
                if(n%4==0) d--;
                if(n%4==3){
                    cout << 2*((d)+3+d) +1 << endl;
                }
                else cout << 2*((d)+2+d) +1 << endl;
            }
        // }
       // }
    }
    // ll canvas=1;
    // for(int i=2;i<1000;i++){
    //     if(i&1){
    //         canvas=(canvas&i);
    //     }
    //     else canvas=(canvas^i);
    //     cout << canvas << endl;
    // }
    return 0;
}