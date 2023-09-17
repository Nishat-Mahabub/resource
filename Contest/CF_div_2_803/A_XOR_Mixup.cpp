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

        for(ll i=0;i<n;i++) cin >> v[i];
        for(ll i=0;i<n;i++){
            int x=0;
            for(ll j=0;j<n;j++){
                //cout << "This";
                if(i!=j) x=(x^v[j]);
            }
            if(x==v[i]){
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}