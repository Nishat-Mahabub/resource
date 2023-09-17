#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        ll n;cin >>n;
        string s;cin >> s;
        bool r=false;
        bool b=false;
        //BBBRWWRRRWBR
        for(ll i=0;i<n;i++){
            if(s[i]!='W'){
                while(i<n && s[i]!='W'){
                    if(s[i]=='B') b=true;
                    if(s[i]=='R') r=true;
                    i++;
                }
                if(r==false || b==false){
                    cout << "NO" << endl;
                    return;
                }
            }
            r=false,b=false;
        }
        cout << "YES" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}