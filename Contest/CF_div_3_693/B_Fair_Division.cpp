#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >> n;
        ll c1=0,c2=0;
        ll sum=0;
        for(ll i=0;i<n;i++){
            ll data;cin >> data;
            sum+=data;
            if(data&1) c1++;
            else c2++;
        }
        if(sum&1) cout << "NO" << endl;
        else{
            if(c2&1){
                if(c1>=2) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else cout << "YES" << endl;
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