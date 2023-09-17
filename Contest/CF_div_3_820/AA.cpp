#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fst first
#define sec second
    int countTime(string s) {
        ll ans=1;
        if(s[0]=='?' && s[1]=='?' ) {
            ans*=24;
        }
        if( s[3]=='?' && s[4]=='?'){
            ans*=60;
        }
        if(s[0]=='?' && s[1]!='?'){
             if(s[1]>'4')ans*=2;
             else ans*=3;
        }
        if(s[1]=='?' && s[0]!='?'){
             if(s[0]>'1')ans*=5;
             else ans*=10;
        }
        if(s[3]=='?' && s[4]!='?') ans*=5;
        if(s[4]=='?' && s[3]!='?') ans*=10;
        return ans;
    }
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;cin >> t;
    while(t--){
        string s;cin >> s;
        cout << countTime(s) << endl;
    }
    return 0;
}