#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s,t;cin >> s >> t;
        bool flag=true;
        if(t=="a"){
            cout << 1 << endl;
            continue;
        }
        for(ll i=0;i<t.size();i++){
            if(t[i]=='a'){
                flag=false;
                cout << -1 << endl;
                break;
            }
        }
        if(flag){
            cout << ( 1ll << (s.size())) << endl;
        }
    }
    return 0;
}