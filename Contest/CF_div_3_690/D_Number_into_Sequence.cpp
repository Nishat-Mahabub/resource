#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        if(n&1) {
            vector<ll> v;
            for(ll i=2;i*i<=n;i++){
                if(n%i==0){
                    if((n/i)%i==0){
                         cout << 2 << endl << i << " " << n/i ;
                         return;
                    }
                }
            }
            cout << 1 << endl << n ;
        }
        else{
            vector<ll> v;
            while(n%2==0){
                n/=2;
                v.push_back(2);
            }
            v.pop_back();
            cout << v.size()+1 << endl;
            for(auto x:v ) cout << x << " ";
            cout << n*2 ;
        }
        return;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}