#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        bool flag_0=false,flag_1=false,flag_2=false;
        ll n;cin >> n;
        ll ct=0;
        string s;
        cin >> s;
        char tmp=s[0];
        if(s[0]=='0') ct++;
        for(ll i=1;i<n;i++){
            if(tmp==s[i] && tmp=='1' && s[i]=='1') {
                flag_2=true;
                break;
            }
            if(s[i]=='0') ct++;
            tmp=s[i];
        }
        if(ct==n) cout << 0 << endl;
        else if(flag_2) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}