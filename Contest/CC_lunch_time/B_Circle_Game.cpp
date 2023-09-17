#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        vector<ll> v(n);
        ll m=LLONG_MAX,j=LLONG_MAX;
        ll mi,ji;
        for(ll i=0;i<n;i++){
            cin >> v[i];
            if(i%2==0){
                if(v[i]<m){
                    m=v[i];
                    mi=i;
                }
            }
            if(i%2==1){
                if(v[i]<j){
                    j=v[i];
                    ji=i;
                }
            }
        }
        if(n&1) cout << "Mike" << endl;
        else{
            if(m==j){
                if(mi<ji) cout << "Joe" << endl;
                else cout << "Mike" << endl;
            }
            else if(m>j) cout << "Mike" << endl;
            else cout << "Joe" << endl;

        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}