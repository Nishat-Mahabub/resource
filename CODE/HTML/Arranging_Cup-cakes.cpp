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
        ll minmum=INT_MAX;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                minmum=min(minmum,((n/i)-i));
            }
        }
        cout << minmum << endl;
    }
    return 0;
}