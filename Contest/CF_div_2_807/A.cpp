#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        n*=2;
        vector<ll> v(n+1);
        for(ll i=1;i<=n;i++)cin >> v[i];
        bool fg=true;

            sort(v.begin(),v.end());
            int d=n/2;
            for(int i=1;i<=d;i++){
                if(v[d+i]-v[i]<x){
                    cout << "NO" << endl;
                    fg=false;
                    break;
                }
            }
        if(fg) cout << "YES" << endl;
    }
    return 0;
}