#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s;cin >> s;
        bool flag=true;
        if(s.size()==1){
            cout << 1 << endl;
            continue;
        }
        ll ct=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1') ct=1;
            else if(s[i]=='?') ct++;
            else if(s[i]=='0'){
                ct++;
                cout << ct << endl;
                flag=false;
                break;
            }
        }
        if(flag) cout << ct << endl;
    }
    return 0;
}