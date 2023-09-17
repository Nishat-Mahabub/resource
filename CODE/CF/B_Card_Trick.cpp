#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n ;vector<ll> v(n);
        for(ll i=0;i<n;i++) cin >> v[i];
        ll sum=0;
        ll m;cin >> m;
        for(int i=0;i<m;i++){
            ll data;cin >> data;sum+=data;
        }
        cout << v[sum%n] << endl;
    }
    return 0;
}