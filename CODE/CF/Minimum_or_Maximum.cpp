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
        if(n==1 || n==2){
            cout << "YES" << endl;
            continue;
        }
        ll max_n;
        ll min_n;
        bool flag=true;
        if(v[0]>v[1]){
            max_n=v[0];
            min_n=v[1];
        }
        else{
            max_n=v[1];
            min_n=v[0];
        }
        for(ll i=2;i<n;i++){
            if(v[i]>min_n && v[i] < max_n) {
                cout << "NO" << endl;
                flag=false;
                break;
            }
            else{
                if(v[i]>max_n) max_n=v[i];
                else min_n=v[i];
            }
        }
        if(flag) cout << "YES" << endl;

    }
    return 0;
}