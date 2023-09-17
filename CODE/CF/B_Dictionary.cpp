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
        if(s[1]>s[0]) cout << 25*(s[0]-'a') + s[1]-'a' << endl;
        else cout << 25*(s[0]-'a') + s[1]-'a' + 1 << endl;
    }
    return 0;
}