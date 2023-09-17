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
        ll ctm=0,ctp=0;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            if(data==-1) ctm++;
            else ctp++;
        }
        ll x =abs(ctm-ctp);
        if(x&1) cout << -1 << endl;
        else cout << x/2 << endl;
    }
    return 0;
}