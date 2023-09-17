#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        char s[8][8];
        pair<ll,ll> p;
        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
                cin >> s[i][j];
            }
        }
        bool flag=false;
        for(ll i=0;i<8;i++){
            for(ll j=0;j<=8-3;j++){
                if(s[i][j]=='#' && s[i][j+1]=='.' && s[i][j+2]=='#'){
                    cout << i+2 << " " << j+2 << endl;
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }
    }
    return 0;
}