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
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        ll sum=0;
        bool fg=false;
        for(int i=0;i<n-1;i++){
            if(v[i]!=0){
                for(int j=i;j<n-1;j++){
                    if(v[j]==0) sum++;
                    sum+=v[j];
                }
                fg=true;
            }
            if(fg) break;
        }
        cout << sum << endl;
    }
    return 0;
}