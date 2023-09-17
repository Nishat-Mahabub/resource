#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,k;cin >> n >> k;
        ll ct=0;
        for(ll i=k+1;i<=n;i++){
            if(i%5==1) ct++;
        }
        cout << ct << endl;
    }
    return 0;
}