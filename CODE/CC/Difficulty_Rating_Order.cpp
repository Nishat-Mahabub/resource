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
        bool flg=true;
        ll tmp;cin >> tmp;
        for(ll i=1;i<n;i++){
            ll data;cin >> data;
            if(data<tmp){
                flg=false;
            }
            tmp=data;
        }
        if(flg) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}