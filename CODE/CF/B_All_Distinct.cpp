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
        set<ll> s;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            s.insert(data);
        }
        ll x=s.size();
        ll y=n-x;
        if(y&1) cout << s.size() -1 << endl;
        else cout << s.size() << endl;
    }
    return 0;
}