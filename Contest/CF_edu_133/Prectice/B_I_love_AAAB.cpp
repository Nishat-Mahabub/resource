#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
void solve(){
        string s;cin >> s;
        ll ctA=0;
        ll ctB=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') ctA++;
            if(s[i]=='B') ctB++;
            if(ctA<ctB){
                cout << "NO" << endl;
                return;
            }
        }
        if(s[s.size()-1]!='B') cout << "NO" << endl;
        else cout << "YES" << endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}