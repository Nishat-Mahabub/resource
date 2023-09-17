#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,x;cin >> n >> x;
        if(x>(n+1)/2) cout << -1;
        // if(n&1){
        else if(x&1){
                for(ll i=97;i<=97+x-2;i++) cout << (char) i ;
                for(ll i=1;i<=n-(2*(x-1));i++) cout << (char) (97+x-1);
                for(ll i=97+x-2;i>=97;i--) cout << (char) i ;
            }
            else{
                if(n&1 && x==(n+1)/2){
                    for(ll i=97;i<=97+x-1;i++) cout << (char) i ;
                    for(ll i=1;i<=n-(2*x);i++) cout << (char) (97+x-1);
                    for(ll i=97+x-2;i>=97;i--) cout << (char) i ;
                }
                else{
                    for(ll i=97;i<=97+x-1;i++) cout << (char) i ;
                    for(ll i=1;i<=n-(2*x);i++) cout << (char) (97+x-1);
                    for(ll i=97+x-1;i>=97;i--) cout << (char) i ;
                }
            }
            cout << endl;

        // }
        // else{
            // if(x&1){
        //         for(ll i=97;i<=97+x-2;i++) cout << (char) i ;
        //         for(ll i=1;i<n-x;i++) cout << (char) (97+x-1);
        //         for(ll i=97+x-2;i>=97;i--) cout << (char) i ;
        //     }
        //     else{
        //         for(ll i=97;i<=97+x-1;i++) cout << (char) i ;
        //         for(ll i=1;i<n-x;i++) cout << (char) (97+x-1);
        //         for(ll i=97+x-1;i>=97;i--) cout << (char) i ;
        //     }
        // }
    }
    return 0;
}