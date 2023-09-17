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
        bool flag=true;
        ll ct=0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        for(ll i=n-2;i>=0;i--){
            while(v[i]>=v[i+1] && v[i]!=0){
                v[i]/=2;
                ct++;
            }
            if(v[i] == v[i+1] || (v[i]==0 && i>0)){
                cout << -1 << endl;
                flag=false;
                break;
            }
        }
        if(flag) cout <<  ct << endl;
    }
    return 0;
}