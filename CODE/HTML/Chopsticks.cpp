#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n,d;cin >> n >> d;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin >> v[i];
    sort(v.rbegin(),v.rend());
    ll ct=0;
    for(ll i=0;i<n-1;i++){
        if((v[i+1]-v[i]) > d ) ct++;
    }
    ll x=n-ct;
    if(x&1) ct++;
    cout << x/2 << endl;

    return 0;
}