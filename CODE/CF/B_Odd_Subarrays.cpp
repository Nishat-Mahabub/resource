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
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        ll ct=0;
        for(ll i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                 ct++;
                 i++;
            }
        }
        cout << ct << endl;
    }
    return 0;
}