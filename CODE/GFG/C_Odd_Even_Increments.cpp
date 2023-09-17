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
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        ll chek0,chek1;
        if(v[0]%2==0) chek0=2;
        else chek0=1;

        if(v[1]%2==0) chek1=2;
        else chek1=1;
        bool flag=true;
        if (chek0==2){
            for(ll i=2;i<n;i+=2){
                if(v[i]%2!=0 ){
                    cout << "NO" << endl;
                    flag=false;
                    break;
                }
            }
        }
        else {
            for(ll i=2;i<n;i+=2){
                if(v[i]%2!=1 && flag ){
                    cout << "NO" << endl;
                    flag=false;
                    break;
                }
            }
        }
        if (chek1==2){
            for(ll i=1;i<n;i+=2){
                if(v[i]%2!=0 && flag){
                    cout << "NO" << endl;
                    flag=false;
                    break;
                }
            }
        }
        else {
            for(ll i=1;i<n;i+=2){
                if(v[i]%2!=1 && flag){
                    cout << "NO" << endl;
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout << "YES" << endl;
    }
    return 0;
}