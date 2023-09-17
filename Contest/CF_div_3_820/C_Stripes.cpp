#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        char s[9][9];
        for(ll i=0;i<8;i++){
            for(ll j=0;j<8;j++){
                cin >> s[i][j];
            }
        }

        for(ll i=0;i<8;i++){
                    ll r=0,b=0;
            for(ll j=0;j<8;j++){
                if(s[i][j]=='R') r++;
            }
            if(r==8 ){
                cout << "R" << endl;return ;
            }
        }
        for(ll i=0;i<8;i++){
                    ll r=0,b=0;
            for(ll j=0;j<8;j++){

                if(s[j][i]=='B') b++;
            }
            if(b==8 ){
                cout << "B" << endl;return ;
            }
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